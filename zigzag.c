#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int column(int len , int row)
{
    int count = 0;
    int fliper = 0;
    int countLine = 0;
    int countDiagonal = 0;
    while (count < len)
    {
        count += (fliper % 2 == 0 ?  row :  (row-2));
        if((fliper % 2 == 0 ?  row :  (row-2)) == row)
        {
            countLine += 1;
        } else if((fliper % 2 == 0 ?  row :  (row-2)) == (row - 2))
        {
            countDiagonal += (row - 2);
        } else
        {
            countDiagonal += 0;
            countLine += 0;
        }
        fliper += 1;
    }
    return countDiagonal + countLine;
}

int main()
{
    char *str = "sourasis";
    int len = strlen(str);
    int row = 3;
    int col = column(len , row);
    char **zigzag = malloc(row * sizeof(char*));
    for (int i = 0; i < row; i++) {
        zigzag[i] = malloc((col + 1) * sizeof(char)); 
        memset(zigzag[i], ' ', col);
        zigzag[i][col] = '\0';
    }
    for(int i = 0 ; i < row ; i++)
    {
        for(int o = 0 ; o < col ; o+=(2*row  - i - o))
        {
            zigzag[i][o] = str[0];
        }
    }
    for (int i = 0; i < row; i++) {
        printf("%s\n", zigzag[i]);
        free(zigzag[i]);
    }
    free(zigzag);
    return 0;
}

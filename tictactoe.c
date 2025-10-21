#include <stdio.h>
#include <stdbool.h>
void banner()
{
    printf("\n");
    printf("=====================================\n");
    printf("          TIC - TAC - TOE          \n");
    printf("=====================================\n");
    printf("\n");
}
void board(char arr[3][3])
{
    printf("\n");
    for(int i = 0; i<3 ; i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            printf(" %c " , arr[i][j]);
            if (j <= 1)
            {
                printf("|");
            }
        }
        if (i <= 1)
        {
            printf("\n---+---+---\n");
        }
    }
    printf("\n\n");
}
char* check_win(char arr[3][3] , int attempt)
{   
    if (attempt != 9)
    {
        if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') {return "X Wins";}
        else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') {return "O Wins";}
        else if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') {return "X Wins";}
        else if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') {return "O Wins";}
        else if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') {return "X Wins";}
        else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') {return "O Wins";}
        else if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') {return "X Wins";}
        else if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') {return "O Wins";}
        else if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') {return "X Wins";}
        else if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') {return "O Wins";}
        else if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') {return "X Wins";}
        else if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') {return "O Wins";}
        else if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') {return "X Wins";}
        else if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') {return "O Wins";}
        else if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') {return "X Wins";}
        else if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O') {return "O Wins";}
    } else {
        return "Draw";
    }
    return NULL;
}   
int main()
{
    char arr[3][3] = {
        {' ' , ' ' , ' '},
        {' ' , ' ' , ' '},
        {' ' , ' ' , ' '}
    };

    banner();

    int counter = 0;
    while (true)
    {
        board(arr);
        int player_input;
        char symb[2] = {'X' , 'O'};
        printf("Player %d (%c) : " , (counter + 1) , symb[counter % 2]);
        scanf("%d" , &player_input);

        if(player_input > 9 ||  player_input < 0 )
        {
            printf("\n Invalid Number.");
            continue;
        } else 
        {
            int row = (player_input - 1) / 3;
            int col = (player_input - 1) % 3;
            arr[row][col] = symb[counter % 2];
            counter += 1;
        }
        char* result = check_win(arr , counter);
        if (result != NULL)
        {   
            board(arr);
            printf("Congratulations \n%s\n\n" , result);
            break;
        }
    }

}


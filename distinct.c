#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n;
    printf("Enter a length : ");
    scanf("%d", &n);
    srand(time(NULL));
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % n;
    }
    int *distinct = (int *)calloc(n, sizeof(int));
    for (int k = 0; k < n; k++)
    {
        distinct[arr[k]]++;
    }
    printf("\nRaw Array :");
    printf("\n { ");
    for (int l = 0; l < n; l++)
    {
        printf(" %d ", arr[l]);
    }
    printf(" } -- ( Raw Elements : %d ) \n", n);
    int distinct_count = 0;
    printf("Distinct : ");
    printf("\n { ");
    for (int o = 0; o < n; o++)
    {
        if (distinct[o] != 0)
        {
            printf(" %d ", o);
            distinct_count++;
        }
    }
    printf(" } -- ( Distinct Elements : %d ) \n", distinct_count);
    return 0;
}

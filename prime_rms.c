#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int count_prime(int n)
{
    int prime_count = 2;
    for(int i = 3; i<=n ; i++)
    {
        int count = 0;
        for(int o = 2 ; o<i ; o++ )
        {
            if(i % o == 0)
            {
                count+=1;
            }
        }
        if(count == 0)
        {
            prime_count += 1;
        }
    }
    return prime_count;
}
int main()
{
    printf("\n");
    int n;
    printf("Enter a number : ");
    scanf("%d" , &n);
    int *arr = (int*)malloc(count_prime(n) * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    int arrIndex = 2;
    for(int i = 3; i<=n ; i++)
    {
        int count = 0;
        for(int o = 2 ; o<i ; o++ )
        {
            if(i % o == 0)
            {
                count+=1;
            }
        }
        if(count == 0)
        {
            arr[arrIndex] = i;
            arrIndex += 1;
        }
    }

    int squareSum = 0;
    for(int k = 0 ; k<count_prime(n) ; k++)
    {
        squareSum += (arr[k] * arr[k]);
    }

    float mean = (float)squareSum / (float)count_prime(n);

    float result = sqrt(mean); 
    printf("\n[ ");
    for(int l = 0 ; l < count_prime(n) ; l++)
    {
        printf("%d " , arr[l]);
    }
    printf("]\n");
    printf("\n");
    printf("The Value of RMS is : %f" , result);
    printf("\n");
    return 0;
}

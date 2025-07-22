#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1;
    printf("Num1 : ");
    scanf("%d" , &num1);
    int num2;
    printf("\nNum2 : ");
    scanf("%d" , &num2);
    int st_num1 = num1  , st_num2 = num2 ;
    num1 = num1 != 0 ? abs(num1) : printf("\nNum1 Should be a non-zero Number.");
    num2 = num2 != 0 ?  abs(num2) : printf("\nNum2 Should be a non-zero Number.") ;
    int temp;
    while (num2 % num1 > 0)
    {
        temp = num1;
        num1 =  num2 % num1;
        num2 = temp;
    }
    if(st_num1 != 0 && st_num2!=0) {
    printf("The HCF of %d and %d is : %d" , st_num1 , st_num2 , num1 );
    }
    return 0;
}

#include <stdio.h>
int main() {
    int user_inp;
    printf("Enter a number : ");
    scanf("%d" , &user_inp);
    if(user_inp == 0) {
        printf("The number ");
        printf("%d" , user_inp);
        printf(" is an Even Number\n\n");
    } else {
        if(user_inp % 2 == 0) {
            printf("The number ");
            printf("%d" , user_inp);
            printf(" is an Even Number\n\n");
        } else
        {
            printf("The number ");
            printf("%d" , user_inp);
            printf(" is an Odd Number\n\n");
        }
        
    }
    return 0;
}
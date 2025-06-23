#include <stdio.h>
#include <stdbool.h>

int factorial(int num) {
    int result = 1;
    for(int i = 1;i<=num;i++){
        result = result * i;
    }
    return result;
}
int main() {
    int natural_number ;
    printf("Enter an natural Number : ");
    scanf("%d" , &natural_number);
    bool n_status = true;
    if(natural_number <= 0) {
        n_status = false;
    }   

    if(n_status) {
        if(natural_number == 0) {
            printf("The factorial of number %d is: %d\n", natural_number, 1);
        } else {
            printf("The factorial of number %d is: %d\n", natural_number, factorial(natural_number));
        }
    }

    return 0;
}
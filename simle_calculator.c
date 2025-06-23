#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int add(int a  , int b) {
    return a + b ;
}
int substract(int a , int b) {
    return a - b;
}
int multiplication(int a  , int b) {
    return a * b;
}
int division(int a , int b) {
    return a / b ;
}
int square(int x) {
    return x * x;
}

void getInput(int* inpArr) {
    printf("Enter the First Number : ");
    scanf("%d", &inpArr[0]);
    printf("Enter the Second Number : ");
    scanf("%d", &inpArr[1]);
}

int main () {
    printf("------------------------------------------\n");
    printf("----Simple Calculator - Sourasis Maity----\n");
    printf("------------------------------------------\n\n");
    printf("Select Operation:\n");
    printf(" [1] Add\n");
    printf(" [2] Substract\n");
    printf(" [3] Multiplication\n");
    printf(" [4] Division\n");
    printf(" [5] Square\n");
    printf(" [6] Square Root\n");
    printf(" [7] Exit\n\n");
    bool loopStatus = true;
    while (loopStatus) {
        int actionCode ;
        printf("Select an option : ");
        scanf("%d" , &actionCode);
        switch (actionCode)
        {
        case 1: {
            int inpArr[2];
            getInput(inpArr);
            int result = add(inpArr[0] , inpArr[1]);
            printf("The answer is : ");
            printf("%d" , result);
            printf("\n");
            break; 
        }
        case 2: {
            int inpArr[2];
            getInput(inpArr);
            int result = substract(inpArr[0] , inpArr[1]);
            printf("The answer is : ");
            printf("%d" , result);
            printf("\n");
            break; 
        } 
        case 3: {
            int inpArr[2];
            getInput(inpArr);
            int result = multiplication(inpArr[0] , inpArr[1]);
            printf("The answer is : ");
            printf("%d" , result);
            printf("\n");
            break;  
        }
        case 4: {
            int inpArr[2];
            getInput(inpArr);
            int result = division(inpArr[0] , inpArr[1]);
            printf("The answer is : ");
            printf("%d" , result);
            printf("\n");
            break;   
        } 
        case 5: {
            int user_input ;
            printf("Enter a number : ");
            scanf("%d" , &user_input);
            int result = square(user_input);
            printf("The answer is : ");
            printf("%d" , result);
            printf("\n");
            break;
        }
        case 6: {
            double user_input ;
            printf("Enter a number : ");
            scanf("%lf" , &user_input);
            double squareRoot = sqrt(user_input);
            printf("The answer is  : ");
            printf("%.2f" , squareRoot);
	    printf("\n");
            break;
        }
        case 7: {
            loopStatus = false;
            printf("\n\nExiting....\n");
            break;
        }
        default:
            printf("Invalid option. Please choose between 1 to 7.\n");
        }
    }

    printf("\n\n----Thankyou for using this App-----\n\n");
    return 0;
}

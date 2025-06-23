#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int getRandomNumber() {
    int min = 1;
    int max = 100;
    srand(time(NULL));
    int random_number = rand() % max + min;
    return random_number;
}
int main() {
    int generatedNumber = getRandomNumber();
    int user_input =0;
    while (user_input!=generatedNumber)
    {
        printf("Guess a number between 1 to 100 : ");
        scanf("%d" , &user_input);
        if(user_input < generatedNumber) {
            printf("Your number is sorter than generated number.\n\n");
        } else if(user_input > generatedNumber) {
            printf("Your number is greater than generated number.\n\n");
        } else {
            printf("Congratulations, The number is  : ");
            printf("%d" , generatedNumber);
            printf("\n");
        }
    }
    
    return 0;
}
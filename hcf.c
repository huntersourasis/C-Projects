#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1 , num2 , temp;
  printf("Enter the first number : ");
  scanf("%d" , &num1);
  printf("Enter the second number : ");
  scanf("%d" , &num2);
  num1 = abs(num1);
  num2 = abs(num2);
  while (num2 % num1 > 0) {
    temp = num1;
    num1 = num2 % num1;
    num2 = temp;
  }
  printf("%d" , num1);
  return 0;
}

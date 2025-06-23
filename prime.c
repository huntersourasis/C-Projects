#include <stdio.h>
int main() {
    int range;
    printf("Enter the range : ");
    scanf("%d" , &range);
    int count = 0;
    printf("%d" , 1);
    printf("\n");
    for(int i = 1;i<=range;i++) {
        for(int o = 1 ; o<=i ; o++) {
            if(i%o == 0) {
                count++;
            }
        }
        if(count == 2) {
            printf("%d" , i);
            printf("\n");
            count = 0;
        } else {
            count = 0;
        }
    }
    return 0;
}
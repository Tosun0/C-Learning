#include <stdio.h>

int main() {

    int number;
        do{
            printf("1. Hi\n");
            printf("2. What help do you need\n");
            printf("0. Exit\n");
            printf("Select the number\n");
            scanf("%d", &number);
            
            if (number == 1) {
                printf("Hi~\n");}

                else if (number == 2) {
                    printf("I will help you\n");}
                    
                else if (number == 0) {
                    printf("Exiting\n");
                    return 0;}
            
                else {
                    printf("Wrong number\n");

                }

        } while(1);
    
    return 0;
}
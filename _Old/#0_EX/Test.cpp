#include <stdio.h>

int main() {

    int input;
    int numA, numB;

    for (;;)
    {
        printf("Choose your menu\n");
        printf("1. Say Hello\n");
        printf("2. Today's Date\n");
        printf("3. Sum Some Number\n");
        printf("0. Exit Program\n");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            printf("Hi~~\n");
            break;
        
        case 2:
            printf("2025-03-26\n");
            break;

        case 3:
            printf("Type your number\n");
            scanf("%d %d", &numA, &numB);
            printf("It's %d\n", numA + numB);
            break;

        case 0:
            printf("Exiting\n");
            return 0;    

        default:
            printf("Wrong number\n");
            break;
        }

        for(;;) {
            printf("0. Back\n");
            scanf("%d", &input);

            if (input == 0){
                break;
            }

            else {
                printf("Wrong number\n");
            }
        }
    }
    return 0;
}
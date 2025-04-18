#include <stdio.h>
void getinput(int *input);
void sum(int input, int *total);
void subtract(int input, int *total);
void multiply(int input, int *total);
void divide(int input, int *total);
void print(int total);

int main() {
    int select;
    int input;
    int total = 0;

    printf("Tosun's Calculator 1.0.\n");

    do
    {
        printf("Type the number of an action you want to commence.\n");
        printf("1. Sum | 2. Subtract | 3. Multiply | 4. Divide | 5. Reset | 0. Exit\n");
        scanf("%d", &select);
        switch (select)
        {
        case 0:
            printf("Exiting.");
            getchar(); getchar();

            return 0;
        break;

        case 1:
            getinput(&input);
            sum(input, &total);
            print(total);
            break;
        
        case 2:
            getinput(&input);
            subtract(input, &total);
            print(total);
            break;

        case 3:
            getinput(&input);
            multiply(input, &total);
            print(total);
            break;

        case 4:
            getinput(&input);
            divide(input, &total);
            print(total);
            break;

        case 5:
            total = 0;
            print(total);
            break;
        
        default:
            printf("Error: Not defined action.\n");
            break;
        }
    } while (1);
    return 0;
}

void getinput(int *input) {
    printf("Type your number.\n");
    scanf("%d", input);
}

void sum(int input, int *total) {
    *total +=  input;
}

void subtract(int input, int *total) {
    *total -=  input;
}

void multiply(int input, int *total) {
    *total *= input;
}

void divide(int input, int *total) {
    if (input == 0) {
        printf("Error: You cannot divide by zero!\n");
        getinput(&input);

        if (input == 0) {
            printf("Still zero! Operation cancelled.\n\n");
            return;
        }
    }

    printf("Across this new divide~\n");
    *total /= input;
}

void print(int total) {
    printf("Result : %d\n\n", total);
}
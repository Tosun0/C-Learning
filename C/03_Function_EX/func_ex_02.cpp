#include <stdio.h>

void multiplyMachine(int *i, int input, int *ptotal); 

int main() {
    int input = 0, total = 1, i = 1;
    int *ptotal = &total;

    printf("This is 1 to N Multiply Machine.\n");
    scanf("%d", &input);
    if (input <= 0) {
        if (input == 0) {
            printf("0! is 1 by definition.\n");
            printf("Your total number is 1.\n");
            getchar(); getchar();
            return 0;
        }
        printf("Error: Factorial is not defined for negative numbers.\n");
        getchar(); getchar();
        return 0;
    }

    printf("Multiplying 1 all the way to %d...\n", input);
    multiplyMachine(&i, input, &total);
    printf("Your total number is %d.\n", total);

    getchar(); getchar();

    return 0;
}

void multiplyMachine(int *pi, int input, int *ptotal) {

    *ptotal = (*ptotal) * (*pi);
    *pi += 1;

    if(*pi <= input) {
        multiplyMachine(pi, input, ptotal);
    }
}
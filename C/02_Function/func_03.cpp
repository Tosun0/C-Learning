#include <stdio.h>

int sumMachine(int input) {

    int total = 0;
    int i = 1;

    while(i <= input) {
        total += i;
        i++;
    }

    return total;
}

int main() {
    int input = 0;

    printf("1 to n Sum Machine\n");
    scanf("%d", &input);
    printf("total is %d\n", sumMachine(input));

    getchar();
    getchar();

    return 0;
}
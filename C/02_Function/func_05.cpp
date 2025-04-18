#include <stdio.h>
int swap(int *a, int *b);

int main() {
    int a = 313, b = 315;

    printf("Before : %d | %d\n", a, b);
    swap(&a, &b);
    printf("After : %d | %d\n", a, b);
    swap(&a, &b);
    printf("One More! : %d | %d\n", a, b);

    getchar();
    getchar();

    return 0;
}

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}

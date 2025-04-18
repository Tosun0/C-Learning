#include <stdio.h>

int main() {
    int arr[5] = {94, 89, 68, 97, 78};
    int* parr = arr;
    int sum = 0;

    while (parr - arr < 5) {
        sum += *parr;
        parr++;
    }

    printf("your average score is %d\n", sum / 5);
    scanf("%d", &sum);

    return 0;
}
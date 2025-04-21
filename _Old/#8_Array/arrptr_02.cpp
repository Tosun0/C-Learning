#include <stdio.h>

int main() {
    int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};
    int* parr = arr;
    int sum = 0;
    int temp;

    while (parr - arr <= 9) {
        sum += (*parr);
        parr++;
    }

    printf("my score average %d\n", sum / 10);

    scanf("%d", temp);
    return 0;

}
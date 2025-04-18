#include <stdio.h>

int main() {
    int arr[5] = {92, 95, 93, 96, 90};
    int max = sizeof(arr) / 4 - 1;
    int *left = arr, *right = &arr[max];
    int temp;

    while (left - arr <= max) {
        printf("%d ", *left);
        left++;
    }

    left = arr;

    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    left = arr;
    printf("\n");

    while (left - arr <= max) {
        printf("%d ", *left);
        left++;
    }

    return 0;
}
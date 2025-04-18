#include <stdio.h>

int main() {
    int arr[5] = {96, 92, 94, 90, 100};
    int arrmax = sizeof(arr) / sizeof(arr[0]) - 1;
    int *parr = arr;
    int temp;

    for(int i = 0; i <= arrmax; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    parr = arr;

    for(int j = 0; j <= arrmax; j++) {
        for(int i = 0; i < arrmax - j; i++) {
            if(parr[i] < arr[i + 1]) {
                temp = arr[i + 1];
                arr[i + 1] = parr[i];
                parr[i] = temp;
            }
        }
    }

    parr = arr;

    while (parr - arr <= arrmax) {
        printf("%d ", *parr);
        parr++;
    }
    getchar();
    return 0;
}
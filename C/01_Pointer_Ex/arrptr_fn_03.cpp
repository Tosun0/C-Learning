#include <stdio.h>

int main() {
    int arr[5] = {92, 95, 93, 96, 90};
    int arrmax = sizeof(arr) / sizeof(int) - 1;
    int *parr = arr;
    int min = 0, i = 0, loc = 0;

    min = *parr;

    while(parr - arr <= arrmax) {
        if(min > *parr) {
            min = *parr;
            loc = i;
        }

        i++;
        parr++;
    }
    printf("the min num of array is %d, located at %d", min, loc + 1);
    return 0;
}
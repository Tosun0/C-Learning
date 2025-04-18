#include <stdio.h>

int main() {
    int arr[5] = {92, 95, 93, 96, 90};
    int* parr = arr;
    int max = 0;

        while(parr - arr < 5) {
            if(max < *parr) {
                max = *parr;
            }
            parr++;
            }

            printf("%d\n", max);
        }
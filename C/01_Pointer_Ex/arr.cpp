#include <stdio.h>

int main() {

    int arr[5] = {32, 47, 56, 84, 29};
    int temp;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5 - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
    scanf("%d", &temp);
    return 0;
}
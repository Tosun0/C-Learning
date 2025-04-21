#include <stdio.h>

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *parr;
    // parr = arr;
    int i;
    
    for(i = 0; i < 10; i++) {
        printf("Array's %dth Address is %p\n", i, &arr[i]);
        printf("PArray's %dth Address is %p\n", i, (arr + i));

        if(&arr[i] == (arr + i)) {
            printf("--> Pass\n");
        }

        else {
            printf("--> Not Pass\n");
        }
    }

    scanf("%d", &i);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j;
    int x, y, z;
    int ***arr;

    printf("arr[x][y][z]\n");
    scanf("%d %d %d", &x, &y, &z);

    arr = (int ***)malloc(sizeof(int**) * x);

    for(i = 0; i < x; i++) {
        arr[i] = (int **)malloc(sizeof(int*) * y);
        for(j = 0; j < y; j++) {
            arr[i][j] = (int *)malloc(sizeof(int) * z);
        }
    }

    printf("Completed.\n");

    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);


    getchar(); getchar();

    return 0;
}
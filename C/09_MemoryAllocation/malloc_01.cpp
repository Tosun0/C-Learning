#include <stdio.h>
#include <stdlib.h>
#include "D:\Unreal Projects\_Etc\test\#0_Settings\sleep.cpp"

int main(int argc, char **argv) {
    int SizeOfArray;
    int *arr;

    printf("How big do you want to make an array\n");
    scanf("%d", &SizeOfArray);

    arr = (int *)malloc(sizeof(int) * SizeOfArray);

    free(arr);

    sleep();

    return 0;
}
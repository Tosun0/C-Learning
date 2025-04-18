#include <stdio.h>

void sort(int *parrA, int arrAsize);
void sumMachine(int (*parrB)[3], int inputValue);
void hello(int arr[][3]);

void hello(int arr[][3]) {
printf("%d", arr[1][3]);
}

int main() {
    int arrA[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int arrB[3][3] = {{110, 230, 450}, {90, 60, 35}, {1, 1, 1}};
    int (*parrB)[3] = arrB;
    int input = 0;
    int inputValue = 0;

    printf("What fuction do you want to use?\n");
    printf("1. Sort numbers of your array by size\n");
    printf("2. Add a number to 2D array\n");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        inputValue = 0;
        printf("Choose a size for your array\n");
        scanf("%d", &inputValue);
        printf("Type %d numbers\n", inputValue);
        for(int i = 0; i < inputValue; i++) {
            printf("Element No.%d\n", i + 1);
            scanf("%d", &arrA[i]);
        }

        sort(arrA, inputValue);
        for(int i = 0; i < inputValue; i++) {
            printf("No.%d | %d\n", i + 1, arrA[i]);
        }


        getchar();
        getchar();
        break;
    
    case 2:
        inputValue = 0;
        printf("The origin of array\n");
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                printf("%d ", arrB[i][j]);
            }
            printf("\n");
        }
        
        printf("What numbers do you want to sum?\n");
        scanf("%d", &inputValue);
        
        sumMachine(arrB, inputValue);

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                printf("%d ", arrB[i][j]);
            }
            
            printf("\n");
        }
        getchar();
        getchar();
        break;
    
    default:
        break;
    }
}


void sort(int *parrA, int arrAsize) {
    int temp;
    for(int i = 0; i < arrAsize; i++) {
        for(int j = 0; j < arrAsize - 1 - i; j++) {
            if(parrA[j] < parrA[j + 1]) {
                temp = parrA[j];
                parrA[j] = parrA[j + 1];
                parrA[j + 1] = temp;
            }
        }
    }
}

void sumMachine(int (*parrB)[3], int inputValue) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            parrB[i][j] += inputValue;
        }
    }
}
#include <stdio.h>

int changeVal(int *pi) {
    *pi = 3;
    return 0;
}

int main() {
    int i = 0;

    printf("Before : %d\n", i);
    changeVal(&i);
    printf("After : %d\n", i);
    
    getchar();
    getchar();

    return 0;
}
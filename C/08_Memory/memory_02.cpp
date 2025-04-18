#include <stdio.h>

void readChar(void *p, int byte);

int main() {

    int arr[10] = { 0x12345678 };

    void *parr = arr;

    printf("%x \n", arr[0]);

    readChar(parr, 4);

    getchar(); getchar();

    return 0;
}

void readChar(void *p, int byte) {

    while(p && byte) {
        printf("%x \n", *(char *)p);
        byte--;

        p = (char *)p + 1;
    }
}
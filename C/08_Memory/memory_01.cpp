#include <stdio.h>

int read_char(void *p, int byte);

int main() {
    int arr[1] = {0x12345678};
    printf("%x \n", arr[0]);
    read_char(arr, 4);
}

int read_char(void *p, int byte) {
    do {
        printf("%x \n", *(char *)p);
        byte--;
        p = (char *)p + 1;
    } while (p && byte);

    getchar(); getchar();
    return 0;
}
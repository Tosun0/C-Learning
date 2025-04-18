#include <stdio.h>

void strcopy(char *src, char *dest);

int main() {
    char src[256] = "hello";
    char dest[256] = "hi";

    printf("Before : %s %s\n", src, dest);

    strcopy(src, dest);

    printf("After : %s %s\n", src, dest);

    getchar(); getchar();

    return 0;
}

void strcopy(char *src, char *dest) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
#include <stdio.h>
void stradd(char *src, char *dest);

int main() {
    char str1[256] = "hello";
    char str2[256] = "hi ";

    printf("%s %s\n", str1, str2);
    stradd(str1, str2);
    printf("%s\n", str2);

    getchar(); getchar();

    return 0;
}

void stradd(char *src, char *dest) {
    while (*dest) {
        dest++;
    }

    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}
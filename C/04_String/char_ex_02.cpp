#include <stdio.h>

int compare(char *str1, char *str2);

int main() {
    char str1[] = "hello from the other side";
    char str2[] = "I must have called a thousand times";

    printf("%s\n", str1);
    printf("%s\n", str2);
    compare(str1, str2);

    getchar(); getchar();

    return 0;
}

int compare(char *str1, char *str2) {

    while(*str1 || *str2) {
        if(*str1 != *str2) {
            printf("It's not same~");
            return 1;
        }
        str1++;
        str2++;
    }

    printf("It's same~");
    return 0;
}
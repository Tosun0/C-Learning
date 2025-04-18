#include <stdio.h>

int main() {
    char str1[256], str2[256];

    printf("First Name : ");
    scanf("%s", str1);
    printf("Last Name : ");
    scanf("%s", str2);

    printf("Full Name : %s %s\n", str1, str2);

    getchar(); getchar();

    return 0;
}
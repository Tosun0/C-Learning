#include <stdio.h>

void copystr(char *dest, char *src);

struct Books {
    char name[32];
    char auth[32];
    char publ[32];
    int borrowed;
};

int main() {
    struct Books list[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Informations of the book you want to add.\n");
        printf("Title\n");
        scanf("%s", list[i].name);
        printf("Author\n");
        scanf("%s", list[i].auth);
        printf("Publisher\n");
        scanf("%s", list[i].publ);
        list[i].borrowed = 0;
    }

    printf("Informations of the books.\n");
    for (i = 0; i < 3; i++) {
        printf("--------------------------\n");
        printf("Title : %s\n", list[i].name);
        printf("Author : %s\n", list[i].auth);
        printf("Publisher  : %s\n", list[i].publ);
        if (list[i].borrowed == 0) {
            printf("Currently Avaliable.\n");
        } else {
            printf("Out of Stock.\n");
        }
    }

    getchar(); getchar();

    return 0;
}

void copystr(char *dest, char *src) {
while(*src) {
    *dest = *src;
    src++;
    dest++;
}

*dest = '\0';
}
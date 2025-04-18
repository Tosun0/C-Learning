#include <stdio.h>

void bookadd(int *booknum, char (*books)[3][32]);
void search(int i);


int main() {
    printf("Library Management System\n");
    char books[100][3][32];
    int booknum = 0;

    bookadd(&booknum, books);

    getchar(); getchar();

    return 0;
}


void bookadd(int *booknum, char (*books)[3][32]) {
    printf("Title : ");
    scanf("%s", &books[*booknum][0]);

    while(getchar() != '\n')

    printf("Writer : ");
    scanf("%s", &books[*booknum][1]);
    printf("Company : ");
    scanf("%s", &books[*booknum][2]);
    printf("The book is now online.\n");

    *booknum +=1;
}
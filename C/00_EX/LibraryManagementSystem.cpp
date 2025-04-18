#include <stdio.h>

struct info {
    char name[32];
    char auth[32];
    char publ[32];
    int aval;
};

void intro(int *selection);
void addBook(struct info *book, int *bookIndex);
// void searchBook(struct info book.name, const char *search);
void selectBook(struct info *book, int *selectionB, int *selectionC, int bookIndex);
void borrowBook(struct info *book, int selectionB, int bookIndex);
void returnBook(struct info *book, int selectionB, int bookIndex);
void pressAnyKey();

int main() {

    struct info book[100];
    struct info *pbook = book;
    int selection;
    int selectionB;
    int selectionC;
    int bookIndex = 0;

    do {
        intro(&selection);

        switch (selection) {
            case 1:
                addBook(&book[bookIndex], &bookIndex);
                break;
            
            case 2:
                // searchBook();
                break;

            case 3:
                if(bookIndex > 0) {
                    selectBook(&book[0], &selectionB, &selectionC, bookIndex);

                    switch (selectionC)
                    {
                    case 1:
                        borrowBook(&book[0], selectionB, bookIndex);
                        pressAnyKey();
                        break;

                    case 2:
                        returnBook(&book[0], selectionB, bookIndex);
                        pressAnyKey();
                        break;
                    
                    default:
                        printf("Error: Not Defined Action\n");
                        pressAnyKey();
                        break;
                    }
                }

                else {
                    printf("No books allowed\n");
                }

                break;

            default:
                printf("Error: Not Defined Action\n");
                pressAnyKey();
                break;
        }
        printf("\n");
    } while(1);

    pressAnyKey();
    return 0;
}

void intro(int *selection) {
    printf("// Library Management System //\n");
    printf("Select the number to proceed\n");
    printf("|| 1. Add || 2. Search || 3. Borrow & Return ||\n");
    scanf("%d", selection);
}

void addBook(struct info *book, int *bookIndex) {
    printf("Title : ");
    scanf("%s", &book[*bookIndex].name);

    printf("Author : ");
    scanf("%s", &book[*bookIndex].auth);

    printf("Publisher : ");
    scanf("%s", &book[*bookIndex].publ);

    book[*bookIndex].aval = 1;

    printf("%s is succesfully updated!\n", book[*bookIndex].name);

    (*bookIndex)++;
}

// void searchBook(struct info book.name, const char *search) {
//     for (int i = 0; i < 100; i++) {
//         while(*search) {
//             if(*search == book[i].name) {
//                 search++;
//                 book[i].name++;
//             }
//         }
//     }
// }

void selectBook(struct info *book, int *selectionB, int *selectionC, int bookIndex) {
    for (int i = 0; i < bookIndex; i++) {
        printf("%2d| %s | [%s]\n", i + 1, book[i].name, book[i].aval ? "Avaliable" : "Borrowed");
    }

    printf("Select the Book to proceed\n");
    scanf("%d", selectionB);

    printf("Select the number to proceed\n");
    printf("|| 1. Borrow || 2. Return ||\n");
    scanf("%d", selectionC);
    }

void borrowBook(struct info *book, int selectionB, int bookIndex) {
    if (book[selectionB - 1].aval == 1) {
        printf("%s is succesfully borrowed.\n", book[selectionB - 1].name);
        book[selectionB - 1].aval = 0;
    }

    else {
        printf("Sorry, this book is currently out of stock.\n");
    }
}

void returnBook(struct info *book, int selectionB, int bookIndex) {
    if (book[selectionB - 1].aval == 0) {
        printf("%s is succesfully returned.\n", book[selectionB - 1].name);
        book[selectionB - 1].aval = 1;
    }

    else {
        printf("Error: This Action is Not Avaliable\n");
    }
}

void pressAnyKey() {
    printf("Press any key...\n");
    getchar(); getchar();
}
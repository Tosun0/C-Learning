#include <stdio.h>

int main() {
    int height;
    height = 7;
    int starmax = 1;

    // printf("Choose how many stories you wanna make\n");
    // scanf("%d", &height);
    
    for(int story = 1; story <= height; story++) {
        starmax = story * 2;

        for(int space = 1; space <= height - story; space++) {
            printf(" ");
        }
        
        for(int star = 1; star < starmax; star++) {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
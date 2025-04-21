#include <stdio.h>

int main() {
    int scores[5];
    int temp;

    for(int i = 0; i < 5; i++) {
        printf("type score of the %dth student\n", i + 1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - 1 - i; j++) {
            if(scores[j] < scores[j + 1]) {
                temp = scores[j + 1];
                scores[j + 1] = scores[j];
                scores[j] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        printf("Score %d : ", scores[i]);
        for(int j = 1; j <= scores[i]; j++) {
            printf("|");
        }
        printf("\n");
    }
    // scanf("%d", &temp);
    return 0;
}
#include <stdio.h>
int getScores(int (*pscores)[3], int *pavg);
int sortScores(int *pavg);
int printScores(int *pavg);

int main() {
    int scores[5][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int (*pscores)[3] = scores;
    int avg[5] = {0, 0, 0, 0, 0};
    int *pavg = avg;

    printf("Let's sort the student\n");
    getScores(pscores, pavg);
    sortScores(pavg);
    printScores(pavg);

    getchar();
    getchar();
    return 0;
}

int getScores(int (*pscores)[3], int *pavg) {
    for(int i = 0; i < 5; i++) {
        printf("Type %dth student's scores\n", i + 1);
        printf("/ Korean / Math / English /\n");
        scanf("%d %d %d", &pscores[i][0], &pscores[i][1], &pscores[i][2]);
        for(int j = 0; j < 3; j++) {
            pavg[i] += pscores[i][j];
        }
        pavg[i] = pavg[i] / 3;
    }
    return 0;
}

int sortScores(int *pavg) {
    int temp = 0;
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if(pavg[j] < pavg[j + 1]) {
                temp = pavg[j];
                pavg[j] = pavg[j + 1];
                pavg[j + 1] = temp;
            }
        }
    }

    return 0;
}

int printScores(int *pavg) {
    for(int i = 0; i < 5; i++) {
        printf("%d ", pavg[i]);
        if(pavg[i] >= 90) {
            printf("| You are a Pass\n");
        }

        else {
            printf("| You are NOT a Pass\n");
        }
    }
    printf("\n");

    return 0;
}
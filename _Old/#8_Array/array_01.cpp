#include <stdio.h>

int main() {

    int stdnum = 5;
    int arr[stdnum - 1];
    int i, ave = 0;

    for (i = 0; i < stdnum; i++) {
        printf("%dth student score is\n", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < stdnum; i++) {
        ave += arr[i];
    }

    ave = ave / stdnum;
    printf("the total average is %d\n", ave);
    
    for (i = 0; i < stdnum; i++) {
        
        if(arr[i] >= 90)
            printf("%dth student is a Pass\n", i + 1);

        else
            printf("%dth student is not a Pass\n", i + 1);
    }

    scanf("%d", &arr[i]);
    return 0;
}
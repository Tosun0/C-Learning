#include <stdio.h>

int tosun(int arr[3]) {
    int total = arr[0] * 110 + arr[1] * 100 + arr[2] * 50;
    return total;
}

int main() {
    int arr[3];

    printf("how many tosuns did you kill\n");
    printf("/ Headshot / Bodyshot / Assist /\n");
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    printf("your total score is %d\n", tosun(arr));

    getchar();
    getchar();

    return 0;

}
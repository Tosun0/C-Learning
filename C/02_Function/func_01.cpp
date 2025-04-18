#include <stdio.h>

int slave(int day) {
    day = day * 100000;
    return day;
}

int main() {
    int day;
    printf("how many days you worked this month?\n");
    scanf("%d", &day);

    printf("%d", slave(day));
    
    scanf("%d", &day);
    return 0;
}
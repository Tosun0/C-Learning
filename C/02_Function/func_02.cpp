#include <stdio.h>

int slave(int mymoney) {
    mymoney += 10000;

    return mymoney;
}

int main() {
    int mymoney = 120000;

    printf("your total money is %d\n", slave(mymoney));

    getchar();

    return 0;
}
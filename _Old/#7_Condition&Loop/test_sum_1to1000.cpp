#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    while(i <= 1000)
    {
        sum = sum + i;
        i++;
    }
    printf("total value is %d.\n", sum);
    return 0;
}
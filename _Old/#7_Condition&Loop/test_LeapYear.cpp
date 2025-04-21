#include <stdio.h>

int main()
{
    int year = 2015;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("it's leap year.\n");
    }
    else
    {
        printf("it's not leap year.\n");
    }
    return 0;
}
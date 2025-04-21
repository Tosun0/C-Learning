#include <stdio.h>

int main()
{
    int x = -150;
    if(x<0)
    {
        x = -x;
    }
    printf("x's abolute value is %d.\n", x);
    return 0;
}
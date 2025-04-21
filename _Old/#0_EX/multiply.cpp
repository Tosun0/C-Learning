#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        int I = 9;
        int front = 4;
        int total = front * i;

        printf("%d * %d = %d\n", front, i, total);
    }
}
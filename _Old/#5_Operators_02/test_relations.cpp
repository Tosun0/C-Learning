#include <stdio.h>

int main()
{
    int x = 50;
    int y = 30;
    printf("is x equals y? %d\n", x == y);
    printf("is x unequals y? %d\n", x != y);
    printf("is x greater than y? %d\n", x > y);
    printf("is x less than y? %d\n", x < y);
    printf("put y to x? %d\n", x = y);
    return 0;
}
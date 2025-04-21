 #include <stdio.h>

 int main()

{
    int x = 50;
    int y = 30;
    printf("is x greater than y, and y is less than 40? %d\n", (x > y) && (y < 40));
    printf("is x less than y, or y is less than 30? %d\n", (x < y) || (y < 30));
    printf("is x not equals 50? %d\n", x != 50);
    return 0;
}
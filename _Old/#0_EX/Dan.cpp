#include <stdio.h>

int main(){

    int num;
    int total;

    do
    {
        int i = 1;
        printf("Type number\n");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Wrong number\n");
            continue;
        }

        do
        {
            total = num * i;
            printf("%d * %d = %d\n", num, i, total);
            i++;

            if (i > 6)
            {
                break;
            }
            
        } while (1);
        
        if(i > 6) {
            printf("I can only count to 6\n");
        }

        printf("Choose another number\n");
    } while (1);

    return 0;
}
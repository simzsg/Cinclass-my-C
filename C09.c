#include "stdio.h"

int main(void)
{

    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("%d Hello for \n", i);
    }
    printf("-----------------------\n");

    i = 1;
    while (i <= 5)
    {
        printf("%d Hello while \n", i);
        i++;
    }

    printf("-----------------------\n");

    i = 1;
    do
    {
        printf("%d Hello do while \n", i);
        i++;
    } while (i <= 5);

    return 0;
}

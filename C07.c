#include "stdio.h"

int main(void)
{

    int level;

    printf("-----------------------\n");
    printf("Welcome Student\n");
    printf("-----------------------\n");
    printf("-----------------------\n");
    printf("Enter your level: \n");
    printf("-----------------------\n");
    scanf("%d", &level);

    if (level == 1)
    {
        printf("Hello You are a freshman\n");
    }
    else if (level == 2)
    {
        printf("You are a sophomore\n");
    }
    else if (level == 3)
    {
        printf("Hello You are a junior\n");
    }
    else if (level == 4)
    {
        printf("Hello You are a senior\n");
    }
    else
    {
        printf("You are not a student\n");
    }

    return 0;
}

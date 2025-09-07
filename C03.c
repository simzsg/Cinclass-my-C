#include <stdio.h>

int main(void)
{
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("-----------------------\n");
    printf("Hello.... %s\n", name);
    printf("Your age is %d\n", age);

    return 0;
}


#include "stdio.h"

void avgThreeNumber(int, int, int);

void ShowNumber(int num1, int num2)
{
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
}

int main(void)
{
    printf("Welcome\n");
    ShowNumber(10, 20);
    avgThreeNumber(10, 20, 30);
    return 0;
}

void avgThreeNumber(int num1, int num2, int num3)
{
    printf("Average of %d, %d and %d is %d = %.2f\n", num1, num2, num3, (num1 + num2 + num3) / 3.0);
}

#include "stdio.h"

void ShowHi(void);

void ShowHello(void)
{
    printf("Hello\n");
}



int main(void)
{
   printf("Welcome\n");
   ShowHello();
   ShowHi();
   return 0;
}

void ShowHi(void)
{
    printf("Hi\n");
}

#include "stdio.h"

int main(void){
    double money;
    int person;
    double share;
    
    printf("-----------------------\n");
    printf("      Money Share\n");
    printf("-----------------------\n");
    printf("Enter the amount of money: ");
    scanf("%lf", &money);
    printf("Enter the number of people: ");
    scanf("%d", &person);
    
    share = money / person;
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("Each person should pay %.2lf Baht\n", share);
    printf("++++++++++++++++++++++++++++++++++++\n");

    return 0;
}



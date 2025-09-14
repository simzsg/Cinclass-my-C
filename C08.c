#include "stdio.h"

int main(void){
    
    int level;

    printf("-----------------------\n");
    printf("Enter your level: ");
    scanf("%d", &level);
    printf("-----------------------\n");

    switch (level)
    {
    case 1:
        printf("-----------------------\n");
        printf("Hello You are a freshman\n");
        printf("-----------------------\n");
        break;
    case 2:
        printf("-----------------------\n");
        printf("Hello You are a sophomore\n");
        printf("-----------------------\n");
        break;
    case 3:
        printf("-----------------------\n");
        printf("Hello You are a junior\n");
        printf("-----------------------\n");
        break;
    case 4:
        printf("-----------------------\n");
        printf("Hello You are a senior\n");
        printf("-----------------------\n");
        break;
    
    
    default:
        printf("-----------------------\n");
        printf("You are not a student\n");
        printf("-----------------------\n");
        break;
    }
    
    
    
    return 0;
}


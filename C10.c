#include "stdio.h"

int main(void){
    
    int x;

    for(x = 1; x <= 10; x++){
        if(x == 5)
        break;
        printf("%d SAU \n", x);
        

    }
    
    printf("+++++++++++++++++++++++\n");

    
    for(x = 1; x <= 10; x++){
        if(x == 5)
        continue;
        printf("%d SAU \n", x);
        

    }
    
    return 0;
}

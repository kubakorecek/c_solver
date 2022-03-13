#include "./main.h"
#include "mathematics/equations/quadratics.h"
#include <stdio.h>


int main () 
{
    printf("Select action");
    printf("\n");
    printf("1. Quadratic equation solver\n");
    printf("999. to QUIT\n");

    int menu = 0;

    while ((scanf( "%d", &menu) == 1)) 
    {
    

        if( menu == 999){return SUCCESS_STATUS; }
        else{
            switch (menu)
                {
                    case 1:
                        
                        printf("Please give paramters of quadratics equation\n");
                        break;

                    default:
                        printf("Invalid Option\n");
                    break;
                }
            }
        
    }
    
}
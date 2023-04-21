#include <stdio.h>
#include <stdlib.h>
#include "my_fun.h"
int main()
{

    int x, v;
    printf(" x =  ");
    scanf("%d",&x);
    printf(" v =  ");
    scanf("%d",&v);
    //printf("swap x and v :  \n ");
    my_swap(x,v);
   // printf("x= %d \n", x );
    //printf("v = %d",v);

    return 0;
}


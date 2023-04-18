#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\ Multiplication Table from 10 to 1: \n \n");

    printf("\ *\t");
    for (int i = 10 ; i >= 1 ; i--)
        printf("%d \t", i);

    printf("\n \n");

    for (int i = 10 ; i >= 1 ; i--)
    {
        printf("\ %d \t", i);
        for (int j = 10 ; j >= 1 ; j--)
            printf("%d \t",(i*j));
        printf("\n \n");
    }
//----Another way ----------
    printf("\t\t---------Another way--------- \n \n ");


    printf("Multiplication Table from 10 to 1: \n \n");

    for(int i=10; i>=1; i--)
    {
        for(int j=10; j>=1; j--)
            printf("%d*%d=%d\t",j,i,j*i);

        printf("\n \n");
    }
    return 0;
}

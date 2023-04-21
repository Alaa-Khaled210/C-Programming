#include <stdio.h>
#include <stdlib.h>
#include "my_fun.h"
int main()
{
    char x[100], rev[100];


    printf(" Enter a string: ");
    scanf("%[^\n]", x);



    printf("\n The reversed string is: %s \n",my_reverse_st(x,rev) );
    return 0;
}


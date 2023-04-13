#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,max;
    max=0;
    printf("Enter 3 numbers and will get a max : \n");
    scanf( "%d %d %d",&num1,&num2,&num3 );

    if(num1>num2 && num1>num3)
    {
        max=num1;
    }
    else if(num2>num1 && num2>num3)
    {
        max=num2;
    }
    else
        max=num3;
    printf("max is = %d",max);

    return 0;
}

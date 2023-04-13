#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    int result;
    char ope;
    char confirm='y';
    while(confirm=='y')
    {

        printf("Enter number1 : ");
        scanf("%d", &num1);
        printf("Enter number2 : ");
        scanf("%d", &num2);
        printf("Enter ope : ");
        ope=getchar();
        scanf("%c", &ope);

        switch(ope)
        {

        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=num1/num2;
            break;

        }

        printf("result = %d \n",result);
        printf("if you want another ope enter y if you do not want press n: \n");
        scanf("%c",&confirm);
        confirm=getchar();

    }
    //----------Q.6 by another simple way--------------
    /*int num1,num2,sum,sub,mul;
    float div;
    printf("Enter num : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=(float)num1/num2;
    printf("the sum = %d \n",sum);
    printf("the sub = %d \n",sub);
    printf("the mul = %d \n",mul);
    printf("the div = %f \n",div);*/

    return 0;
}

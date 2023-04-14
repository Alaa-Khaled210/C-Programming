#include <stdio.h>
#include <stdlib.h>

int main()
{
    //-------Q.11-------------

    int n, x, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (x = 1; x <= n; ++x)
        sum += x;

    if(sum<100)
        printf("Sum = %d", sum);
    else
        printf("Sorry i cant continue sum greater than 100  ");

    return 0;
}

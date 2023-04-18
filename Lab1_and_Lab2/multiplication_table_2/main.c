#include <stdio.h>
#include <stdlib.h>

int main()
{
       printf("Multiplication Table from 1 to 10: \n \n");

for(int i=1; i<=10; i++)
{
    for(int j=1; j<=10; j++)
    printf("%d*%d=%d\t", j, i,j*i);
printf("\n \n");

}

//----Another way ----------
printf("\n \n");
printf("\t\t---------Another way--------- \n \n ");

printf("*\t");
for (int i = 1 ; i <= 10 ; i++)
   printf("%d \t", i);

printf("\n \n");

for (int i = 1 ; i <= 10 ; i++){
      printf("%d \t", i);
    for (int j = 1 ; j <= 10 ; j++)
            printf("%d \t",(i*j));
    printf("\n \n");
}
    return 0;
}

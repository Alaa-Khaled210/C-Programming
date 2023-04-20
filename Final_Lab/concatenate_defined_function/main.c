#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_fun.h"
void main(){

   char sentase1[25];
   char stentase2[25];

  printf("\nEnter First String:");
  gets(sentase1);
  printf("\nEnter Second String:");
  gets(stentase2);
 printf("\nConcatenated String is %s",concatenation(sentase1,stentase2));
 printf("\n \n");

//-------------------------------------------
// it is another way and bad way
/* don't do that ..it just for knowing about this thing..OK ;) */
char name1[]="Alaa";
char name2[]={'K','h','l','e','d'};
/* i don't use a delimetr on the last this
so the last character of this string is the character '\0' we must mention it */
printf("----another way and bad way----\n");
printf("%s\n",name1);
printf("%s\n",name2);

    return 0;
}


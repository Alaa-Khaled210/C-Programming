#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char hello[]="hello ";
    char World[]="World";
    strcat( hello, World);
    printf("concatenates : %s\n", hello );

    return 0;
}

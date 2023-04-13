#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("Enter the size : ");
    int size;
    scanf ("%d", &size);
    printf ("Enter the elements\n");
    int x[size];
    for (int i=0; i<size; ++i) //input array
        scanf ("%d",&x[i]);
// now the bubble sort code
    int sorted = 1 ;
    do
    {
        sorted = 1 ;
        for (int i = 0 ; i < size-1 ; i ++ )
            if (x [i] > x [i+1])   // if true swap
            {
                int temp = x [i] ;
                x [i] = x [i +1] ;
                x [i+1] = temp ;
                sorted = 0 ;
            }
    }
    while (!sorted ) ;
    printf("our Bubble sorted array : \n");
    for (int i = 0 ; i < size; i++) // print sorted array
        printf("element[%d]= %d \n",i,x[i]);

    return 0;
}

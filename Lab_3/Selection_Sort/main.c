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

// now the selection sort code
    for (int i = 0 ; i < size-1; i ++ )
    {
        int smallest = i ;
        for (int j = i + 1 ; j < size  ; j ++ )
            if (x [j] < x [smallest])
                smallest = j ;
        if (smallest != i)    // if true swap
        {
            int temp = x [i] ;
            x [i] = x [smallest] ;
            x [smallest] = temp ;
        }
    }
// print sorted array
    printf("our pretty Selection Sorted array : \n");
    for (int i = 0 ; i < size; i++)
        printf("element[%d]= %d \n",i,x[i]);
    printf ("The 2nd largest number is = %d\n", x[size-2]);
    printf ("The 2nd smallest number is = %d\n", x[1]);


    return 0;
}

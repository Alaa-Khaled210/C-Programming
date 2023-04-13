#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("Enter the size : ");
    int size;
    scanf ("%d", &size);
    printf ("Enter the elements\n");
    int arr[size];
    for (int i=0; i<size; ++i)//input array
        scanf ("%d \n",&arr[i]);
//sort by descending
    for (int i=0; i<size; ++i)
    {
        for (int j=i+1; j<size; ++j)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf ("The elements arranged in descending \n");
    for (int i=0; i<size; ++i)
        printf ("element[%d]= %d% \n",i,arr[i]);
    printf ("\nThe 2nd largest number is = %d\n", arr[1]);
    printf ("The 2nd smallest number is = %d\n", arr[size-2]);
    return 0;
}

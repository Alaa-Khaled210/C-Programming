#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
// enter element of array
    printf("Enter elements in the array:\n");
    for(i=0; i<size; i++)
    {

        scanf("%d", &arr[i]);
    }

    for(int x=0 ; x<size ; x++)
    {

        printf("Element[%d] = %d\n",x,arr[x]);

    }
    return 0;
}

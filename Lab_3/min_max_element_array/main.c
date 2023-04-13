#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
// enter element of array
    printf("Enter elements in the array: \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
// print our pretty array
    for(int x=0 ; x<size ; x++)
    {

        printf("Element[%d] = %d\n",x,arr[x]);
    }

//set first element as min and as max
    int max =arr[0] ;
    int min =arr[0];
//check for each element if max or min
    for(int j=1; j<size ; j++)
    {
        if(arr[j]>max)
            max =arr[j];
        if(arr[j]<min)
            min =arr[j];
    }
//print max and min element
    printf("maximum element = %d\n",max);
    printf("minimum element = %d\n",min);
    return 0;
}

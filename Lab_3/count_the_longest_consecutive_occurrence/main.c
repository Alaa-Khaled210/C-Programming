#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int countOccurrences(int arr[], int n, int sk);
int main()
{
    int arr[] ={1,2,2,3,3,3,3,4,4,4,4,3,3,3};
int n = sizeof(arr)/sizeof(arr[0]);
int sk = 3;
printf(" %d searching %d times",sk, countOccurrences(arr, n, sk));

/*int sk = 3;   // element to search for in the array
int ind = -1 ;
 for (int i = 0; i < 14; i++)
     if (sk == arr [i]){
       ind = i;
       break;
     }
    if(ind != -1)
    printf("Search Key found in index: %d " , ind);
    else
    printf("Search Key not found");*/

        return 0;
}

int countOccurrences(int *arr, int n, int sk){
int res = 0;
for (int i=0; i<n; i++){
 if (sk == arr[i]){
        if (res >=4)
          break;

      res++;
 }
 }
 return res;
}

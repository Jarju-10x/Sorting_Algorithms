#include <stdio.h>
#include <stdlib.h>

void insertion(int arr[], int n);


int main(){
    int i;
    int n;
printf("enter the size of array: ");
scanf("%d",&n);

    int arr[n];

  for ( i = 0; i < n; i++)
    {
        /* code */
        printf("enter %d element: ", i);
        scanf("%d", &arr[i]);
    }
    
    insertion(arr, n);

    for ( i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    } 

}

void insertion(int arr[], int n)
{
    int i,j, temp;

    for ( i = 1; i < n; i++)
    {
         temp = arr[i];
        j = i -1;

        while (j>=0 && arr[j]> temp)
        {
            /* code */
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }
    
}
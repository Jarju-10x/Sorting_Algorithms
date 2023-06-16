#include <stdio.h>
#include <stdlib.h>

void slection(int arr[], int n);


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
    
    slection(arr, n);

    for ( i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    } 

}

void slection(int arr[], int n)
{
    int i,j, temp;

    for ( i = 0; i < n-1; i++){

        int min = i;
        for ( j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
              min = j;
        }
        
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    

}
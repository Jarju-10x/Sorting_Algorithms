#include <stdio.h>

int bubble(int arr[],int n);
void slection(int arr[], int n);
void insertion(int arr[], int n);
void merge(int arr[], int n);

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
     // bubble(arr, n);
    
    // slection(arr, n);

    // insertion(arr, n);
    
    for ( i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    } 

}

int bubble(int arr[],int n){

    int i,j;

    for ( i = 0; i < n-1; i++)
    {
        /* code */
        for ( j = 0; j < n; j++)
        {
            /* code */
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
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

void merge(int arr[], int n){

     int l = arr[0];
     int h = arr[n-1];     
}

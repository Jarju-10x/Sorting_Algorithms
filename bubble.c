#include <stdio.h>

int bubble(int arr[],int n);

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





void merge(int arr[], int n){

     int l = arr[0];
     int h = arr[n-1];     
}

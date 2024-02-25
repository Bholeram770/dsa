#include <stdio.h>
#include <stdlib.h>
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int partition(int *arr,int low,int high){
    int pivot = arr[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(pivot>=arr[i]){
            i++;
        }
        while(pivot<arr[j]){
            j--;
        }
        if(j>i){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
int  quicaaaksort(int *arr, int low,int high)
{
    
    if(low<high){
        int partionindex;
        partionindex=partition(arr,low,high);
       quicksort(arr,low,partionindex-1);
       quicksort(arr,partionindex+1,high);
    }

}
int main()
{
    int *arr;
    int size;
    printf("enter the size of array");
    scanf("%d", &size);
    arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printarray(arr, size);
    quicksort(arr,0,size);
    printarray(arr, size);
}
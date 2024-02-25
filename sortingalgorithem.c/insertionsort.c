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
void insertionsort(int *arr, int size)
{
    int j;
for(int i=0;i<size;i++){
    j=i;
    while(j>0&&arr[j-1]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
j=i+1;
    
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
    insertionsort(arr, size);
    printarray(arr, size);
}
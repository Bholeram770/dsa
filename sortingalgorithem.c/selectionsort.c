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
void selectionsort(int *arr, int size)
{
    int minindex;
    for (int i = 0; i < size; i++)
    {
        minindex=i;
        for (int j= i+1; j < size; j++)
        {
            if (arr[minindex] > arr[j])
            {
               minindex=j;
            }
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
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
 selectionsort(arr,size);
    printarray(arr, size);
}
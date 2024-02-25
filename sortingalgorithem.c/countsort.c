#include <stdio.h>
#include <stdlib.h>
#define INT_MAX
void printarray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void countsort(int *arr, int size)
{
    int max=arr[0];
    for (int i = 0; i < size; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int *crr;
    int sizecrr=max;
    crr=(int *)calloc(sizecrr,sizeof(int));
    for(int i=0;i<sizecrr;i++){
        crr[i]=0;
    }
    for(int i=0;i<sizecrr;i++){
        if(arr[i]!=0){
            i=arr[i];
        }
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
    countsort(arr, size);
//   printarray(arr, size);
}
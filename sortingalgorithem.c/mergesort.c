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
void merge(int *arr, int low,int mid,int high)
{
 int i=low;
 int j=mid+1;
 int brr[10];
 int k=low;
 while(i<=mid&&j<=high){
    if(arr[i]>arr[j]){
        brr[k]=arr[j];
    j++;
    k++;
    }
    else{
        brr[k]=arr[i];
        i++;
        k++;
    }
 }
 while(i<=mid){
    brr[k]=arr[i];
    i++;
    k++;
}
while(j<=high){
    brr[k]=arr[j];
    j++;
    k++;
}
for(int i=low;i<=high;i++){
    arr[i]=brr[i];
}
}
void mergesort(int *arr,int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);

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
  mergesort(arr,0,size-1);
    printarray(arr, size);
}
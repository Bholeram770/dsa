#include<stdio.h>
#include<stdlib.h>
void printarray(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void bubblesort(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int *arr;
    int size;
    printf("enter the size of array");
    scanf("%d",&size);
    arr=calloc(size,sizeof(int));
    for(int i=0;i<size;i++){
      scanf("%d",&arr[i]);
    }
    printarray(arr,size);
    bubblesort(arr,size);
    printarray(arr,size);

    

}
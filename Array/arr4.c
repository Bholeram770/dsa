#include<stdio.h>
#include<stdlib.h>
void sumtwo(int *arr,int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
}
void printarr(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int *arr;
    int sum;
    arr=calloc(200,sizeof(int));
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the sum you want");
    scanf("%d",&sum);
    sumtwo(arr,8, sum);
}
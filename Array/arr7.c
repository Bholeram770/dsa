#include<stdio.h>
#include<stdlib.h>
void frequency(int *arr,int size){
    int i,j;
    int count;
   int visited[size];
   for(int i=0;i<size;i++){
    visited[i]=-1;
   }
   for(int i=0;i<size;i++){
    count=1;
    for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
            visited[j]=0;
        }
        if(visited[i]!=0){
            visited[i]=count;
        }
    }
    if(visited[i]!=0){
        printf("%d:%d\n",arr[i],visited[i]);
    }
   }


}

int main(){
    int *arr;
    int size;
    printf("enter the size of array");
    scanf("%d",&size);
    arr=(int *)calloc(size,sizeof(int));
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    frequency(arr,size);

}
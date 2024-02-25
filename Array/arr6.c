#include<stdio.h>
#include<stdlib.h>
void frequency(int *arr,int size){
    int count;
    int i,j;
    int visited[size];
    for(int i=0;i<size;i++){
        visited[i]=-1;
    }
    
    for( i=0;i<size;i++){
        count=1;
        for( j=i+1;j<size;j++)
            {
                if (arr[i] == arr[j])
                {
                    count++; 
                    visited[j]=0;
                }   
            }
            if (visited[i] != 0)
            {
                visited[i] = count;
            }
            if(visited[i]!=0){
                printf("%d occures %d times in array\n",arr[i],visited[i]);
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
    arr=(int*)calloc(100,sizeof(int));
    printf("Enter the elements in array\n");
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    frequency(arr,8);

    
}
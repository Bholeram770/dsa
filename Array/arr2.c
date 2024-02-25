#include<stdio.h>
#include<stdlib.h>
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void separatearray(int *arr,int n){
    int *brr=(int *)malloc(sizeof(int));
    int *crr=(int *)malloc(sizeof(int));
    int i,j,k=0,l=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
        brr[k]=arr[i];
        k++;
    }
    else{
        crr[l]=arr[i];
        l++;
    }
    }
    printf("even number array\n");
    for(int i=0;i<k;i++){
       printf("%d ",brr[i]);
    }
    printf("\n");
    printf("odd number array\n");
    for(int i=0;i<l;i++){
        printf("%d ",crr[i]);
    }

}

int main(){
//     int *arr;
//     arr=calloc(256,sizeof(int));
//   
int *arr;
arr=calloc(256,sizeof(int));
for(int i = 0; i < 5; i++)
{
      scanf("%d",&arr[i]);
}
separatearray(arr,5);

}
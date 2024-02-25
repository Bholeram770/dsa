#include<stdio.h>
#include<stdlib.h>
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

  printf("\n");
}
void reversearray(int *arr,int low,int high){
    int temp;
       
            for (int i = low; i <= high / 2; i++)
            {
                temp = arr[i];
                arr[i] = arr[high - i - 1];
                arr[high - i - 1] = temp;
            }
}

// void reversearray(int *arr, int size)
// {
//     int temp;
//     for (int i = 0,j=size-1; i < size / 2,j>=size/2; i++,j--)
//     {
//         temp = arr[j];
//         arr[j] = arr[i];
//         arr[i] = temp;
//     }
// }

int main(){
  int *arr;
  arr=calloc(256,sizeof(int));
  for(int i=0;i<8;i++){
    scanf("%d",&arr[i]);
  }
  printarr(arr,8);
  reversearray(arr,3,8);
  printarr(arr,8);
}
#include<stdio.h>
#include<stdlib.h>
int r, c;
void printarr(int arr[r][c],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void multiplicationarray(int )
int main(){
  

    printf("enter the rows of array");
    scanf("%d",&r);
    printf("enter the colun of matrix");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("/n");
   printarr(arr,r,c );
}
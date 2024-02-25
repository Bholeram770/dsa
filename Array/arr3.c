#include<stdio.h>
#include<stdlib.h>
void sumoddeven(int *arr,int n){
   int sumodd=0;
   int sumeven=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sumeven=arr[i]+sumeven;
        }
        else{
            sumodd=sumodd+arr[i];
        }
    }
    printf("sum of odd number ");
    printf("%d\n",sumodd);
     printf("sum of even number ");
    printf("%d\n",sumeven); 
}
int main(){
 int *arr;
 arr=(int *)malloc(sizeof(int));
 for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
 }
 sumoddeven(arr,5);
}

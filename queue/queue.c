#include<stdio.h>
#include<stdlib.h>
struct queue{
       int rear;
       int front;
       int size;
       int *arr;
};
int queuefull(struct queue*q){
    if(q->rear==q->size-1){
        return 1;
    }
    else{
        return 0;
    }

}
int queueisempty(struct queue*q){
    if(q->front==-1&&q->front==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int  enqueue(struct queue*q,int value){
    if(queuefull(q)){
        return 0;
    }
    else{
        q->rear=q->rear+1;
        q->arr[q->rear]=value;
        return value;
    }
    
}
int dequeue(struct queue*q){
    if(queueisempty(q)){
        return 0;
    }
    else{
        q->front=q->front+1;
        int value=q->arr[q->front];
        return value;
    }
}

int main(){
    struct queue*q=(struct queue*)malloc(sizeof(struct queue));
    q->size=10;
    q->front=1;
    q->rear=1;
    q->arr=(int *)malloc(sizeof(int));
    int q1=enqueue(q,21);
   printf("%d element is inserted\n",q1);
   printf("%d element is inserted\n",enqueue(q,22));
   printf("%d element is inserted\n",enqueue(q,23));
   printf("%d element is inserted\n",enqueue(q,24));
   printf("%d element is deleted\n",dequeue(q));
   printf("%d element is deleted\n", dequeue(q));
   printf("%d element is deleted\n", dequeue(q));
   printf("%d element is deleted\n", dequeue(q));
   printf("%d element is deleted\n", dequeue(q));
}
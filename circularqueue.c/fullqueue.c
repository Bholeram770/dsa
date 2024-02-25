#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int rear;
    int front;
    int size;
    int *arr;
};
int queuefull(struct queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 10;
    q->front = 0;
    q->rear = 9;
    q->arr = (int *)malloc(sizeof(int));
    if(queuefull(q)){
        printf("queue is full");
    }
    else{
        printf("queue is not full");
    }
}
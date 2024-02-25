#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
void traversell(struct queue *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct queue*push(struct queue*top,int data)
{
    struct queue*ptr=top;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    struct queue*new=(struct queue*)malloc(sizeof(struct queue));
    new->data=data;
    new->next=NULL;
    ptr->next=new;
    return top;
}

int main()
{
    struct  queue*top = (struct queue *)malloc(sizeof(struct queue));
    struct queue *first = (struct queue *)malloc(sizeof(struct queue));
    struct queue *second = (struct queue *)malloc(sizeof(struct queue));
    struct queue *third = (struct queue *)malloc(sizeof(struct queue));
    struct queue *fourth = (struct queue *)malloc(sizeof(struct queue));
    top->data = 23;
    top->next = first;
    first->data = 90;
    first->next = second;
    second->data = 91;
    second->next = third;
    third->data = 92;
    third->next = fourth;
    fourth->data = 93;
    fourth->next = NULL;
    traversell(top);
    top = push(top, 5);
    traversell(top);
    
}
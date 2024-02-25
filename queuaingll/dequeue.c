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

struct queue *pop(struct queue *top)
{
   if(top->data==NULL){
    printf("queue is empty");
   }
   else{
    struct queue *ptr=top->next;
    free(top);
    top=ptr;
    return top;

    
   }
}

int main()
{
    struct queue *top = (struct queue *)malloc(sizeof(struct queue));
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
    top = pop(top);
    traversell(top);
}
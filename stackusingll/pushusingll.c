#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
void traversell(struct stack *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct stack *push(struct stack *top, int data)
{
    struct stack *new = (struct stack *)malloc(sizeof(struct stack *));
    if (new == NULL)
    {
        printf("stack is full");
    }
    else if (top == NULL)
    {
        new->data = data;
        new->next = NULL;
        top = new;
    }
    else
    {
        new->data = data;
        new->next = top;
        top = new;
    }
    return top;
}
int main()
{
    struct stack *top = (struct stack *)malloc(sizeof(struct stack));
    struct stack *first = (struct stack *)malloc(sizeof(struct stack));
    struct stack *second = (struct stack *)malloc(sizeof(struct stack));
    struct stack *third = (struct stack *)malloc(sizeof(struct stack));
    struct stack *fourth = (struct stack *)malloc(sizeof(struct stack));
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
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversell(struct node *head)
{
    struct node*ptr=head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
    printf("\n");
}

struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node *));
    n->data = data;
    n->next = NULL;
    return n;
}
int main()
{
    struct node *head = createnode(45);
    struct node *first = createnode(46);
    struct node *second = createnode(47);
    struct node *third = createnode(48);
    struct node *fourth = createnode(49);
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;
    traversell(head);
   
}
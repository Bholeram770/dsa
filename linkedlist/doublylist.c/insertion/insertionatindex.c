#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void traversell(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *insertionatindex(struct node *head, int data,int index)
{
    struct node *p = head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->prev = p;
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->prev = NULL;
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
    head->prev = NULL;
    head->next = first;
    first->prev = head;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = NULL;
    traversell(head);
    head = insertionatindex(head, 44,2);
    traversell(head);
}

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void traversell(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}
struct node *deleteatindex(struct node *head,int index)
{
    struct node *p = head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
  
    struct node*q=p->next;
    struct node*r=q->next;
    p->next=q->next;
    r->prev=p;
    free(q);
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
    head->prev = fourth;
    head->next = first;
    first->prev = head;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = head;
    traversell(head);
    head = deleteatindex(head,2);
    traversell(head);
}
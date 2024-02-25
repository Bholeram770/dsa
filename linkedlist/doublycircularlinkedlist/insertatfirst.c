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
    struct node*ptr=head;
   do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
    printf("\n");
}
struct node *insertionatfirst(struct node *head, int data)
{
   struct node*p=head;
   do{
    p=p->next;
   }while(p->next!=head);
   struct node*ptr=(struct node*)malloc(sizeof(struct node*));
   ptr->data=data;
   ptr->prev=p;
   ptr->next=p->next;
   p->next=ptr;
   head=ptr;
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
 head=insertionatfirst(head,56);
 traversell(head);
}
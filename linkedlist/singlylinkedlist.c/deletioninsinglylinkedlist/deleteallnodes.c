#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
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
struct node *deleteallnode(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL){
        ptr=ptr->next;
        free(head);
        head=ptr;
    }
    return head;
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
    fourth->next = NULL;
    traversell(head);
    head = deleteallnode(head);
    traversell(head);
}
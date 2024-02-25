#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *preorder(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        printf("%d ", root->data);
        preorder(root->left);
      
        preorder(root->right);
    }
}
struct node *createnode(int data)
{

    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{
    struct node *p1 = createnode(45);
    struct node *p2 = createnode(46);
    struct node *p3 = createnode(47);
    struct node *p4 = createnode(48);
    struct node *p5 = createnode(49);
    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p4->left = p5;
    preorder(p1);
}

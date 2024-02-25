#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *inorder(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int isbst(struct node*root){
   static struct node*prevnode=NULL;
    if(root!=NULL){
        if(!isbst(root->left)){
            return 0;
        }
        if (prevnode!=NULL && prevnode->data <= root->data)
        {
            return 0;
        }
        prevnode = root;
        return isbst(root->right);
    }
    else{
        return 1;
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
    struct node *p2 = createnode(30);
    struct node *p3 = createnode(60);
    struct node *p4 = createnode(20);
    struct node *p5 = createnode(10);
    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p4->left = p5;
    inorder(p1);
    if(!isbst(p1)){
        printf("This tree is Binary search tree");
    }
    else{
        printf("This is not a Binary search tree");
    }
    
}

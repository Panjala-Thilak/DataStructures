#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;

struct node *getnewnode(int x)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct node *insert(struct node *y,int x)
{
    if(y==NULL)
    {
        y=getnewnode(x);
        return y;
    }
    if(x<y->data)
        y->left=insert(y->left,x);
    else
        y->right=insert(y->right,x);
    return y;
}
struct node *findLCA(struct node* root, int n1, int n2) 
{ 
    if (root == NULL) 
    return NULL; 
  
    if (root->data == n1 || root->data == n2) 
        return root; 
  

    struct node *left_lca  = findLCA(root->left, n1, n2); 
    struct node *right_lca = findLCA(root->right, n1, n2); 
  
    if (left_lca && right_lca)  
    return root; 
  
     
    return (left_lca != NULL)? left_lca: right_lca; 
} 
int main()
{
   int n,x;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
   scanf("%d",&x);
   root=insert(root,x);
   }
   int n1,n2;
   scanf("%d %d",&n1,&n2);
   printf("%d",findLCA(root,n1,n2)->data);
    return 0;
}
/*OUTPUT
6                                                                                                                                
12 10 14 9 8 15                                                                                                                  
8 15                                                                                                                             
12   */

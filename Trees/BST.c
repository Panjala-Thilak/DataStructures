#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;
int maxbst(struct node *y)
{
    while(y->right!=NULL)
    {
        y=y->right;
    }
    return y->data;
}
int minbst(struct node *y)
{
    while(y->left!=NULL)
    {
        y=y->left;
    }
    return y->data;
}
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
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
int height(struct node *z)
{
    if(z==NULL)
    return -1;
    else
    return max(height(z->left),height(z->right))+1;
}
void search(struct node *y,int x)
{
    if(y->data==x)
        printf("%d element is found\n",x);
    else if(x<=y->data)
        search(y->left,x);
    else
        search(y->right,x);
}
int main()
{
    int ch,x,c,hei;
    do
    {
        printf("enter your choice 1.insert 2.height 3.serach 4.maximum 5.minimum\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the element :\n");
                    scanf("%d",&x);
                    root=insert(root,x);
                    break;
            case 2:hei=height(root);
                    printf("the height of the tree is %d",hei);
                    break;
            case 3:printf("enter the element to be searched:\n");
                    scanf("%d",&x);
                   search(root,x);
                    break;
            case 4:printf("the maximum element is %d\n",maxbst(root));
                    break;
            case 5:printf("the minimum element is %d\n",minbst(root));
                    break;
            default:printf("enter right choice\n");
        }
    printf("enter 1 to continue.......!!\n");
    scanf("%d",&c);
    }while(c==1);

    return 0;
}
/*OUTPUT
enter your choice 1.insert 2.height 3.serach 4.maximum 5.minimum
1
enter the element :
3
enter 1 to continue.......!!
1
enter your choice 1.insert 2.height 3.serach 4.maximum 5.minimum
1
enter the element :
2
enter 1 to continue.......!!
1
enter your choice 1.insert 2.height 3.serach 4.maximum 5.minimum
1
enter the element :
9
enter 1 to continue.......!!
1
enter your choice 1.insert 2.height 3.serach 4.maximum 5.minimum
3
enter the element to be searched:
9
9 element is found
enter 1 to continue.......!!
1
enter your choice 1.insert 2.height 3.serach 4.maximum 5.minimum
4
the maximum element is 9
enter 1 to continue.......!!
1
enter your choice 1.insert 2.height 3.serach 4.maximum 5.minimum
5
the minimum element is 2
*/

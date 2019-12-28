/*
Pairwise swap elements of a linked list
Input:1->2->3->4->5->6->NULL
Output:2->1->4->3->6->5->NULL
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void insert(int x)
{
	struct node *temp= (struct node*)malloc(sizeof(struct node)),*temp1;
	temp->data=x;
  temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	temp1=head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
}
void pairwise()
{
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        int x=temp->data;
        temp->data=temp->next->data;
        temp->next->data=x;
        temp=temp->next->next;
        if(temp==NULL)
        break;
    }
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int x;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
	    insert(x);
    }
    pairwise();
    display();
    return 0;
}
/*
OUTPUT
6                                                              
1 2 3 4 5 6                                                    
2 1 4 3 6 5                                                    
*/

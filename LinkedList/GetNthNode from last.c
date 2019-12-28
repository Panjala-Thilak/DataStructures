//Get Nth Node From Last
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
int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int x;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
				insert(x);
    }
     int i=0;
     struct node* temp=head;
     struct node* temp1=head;
    while(k--)
        temp=temp->next;
    while(temp!=NULL)
        {
          temp=temp->next;
          temp1=temp1->next;
        }
        printf("%d",temp1->data);
        return 0;
}
/*
OUTPUT
5 2                                                            
1 2 3 4 5                                                      
4   
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void insert(int);
void display();
int main()
{
	int x,ch;
	do
	{
		printf("enter your choice 1.insert 2.display");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the element to insert");
					scanf("%d",&x);
					insert(x);
					break;
			case 2:printf("The elemnts in the linked list are : ");
					display();
					break;
			default:printf("enter a valid choice");
		}
		printf("press 1 to continue :");
		scanf("%d",&ch);
	}while(ch==1);
}

void insert(int x)
{
	struct node *temp= (struct node*)malloc(sizeof(struct node)),*temp1,*temp2;
	temp->data=x;
	if(head==NULL)
	{
		head=temp;
		temp->next=NULL;
		return;
	}
	temp1=head;
	while(temp1->data<x)
	{
		temp1=temp1->next;
	}
	temp->next=temp1->next;
	temp1->next=temp;
}

void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}



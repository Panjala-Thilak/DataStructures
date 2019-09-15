#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void insert(int);
void delete(int);
void display();
int main()
{
	int x,ch;
	do
	{
		printf("enter your choice 1.insert 2.Delete 3.display");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the element to insert ");
					scanf("%d",&x);
					insert(x);
					break;
				case 2:printf("Enter the element to delete ");
					scanf("%d",&x);
					delete(x);
					break;
			case 3:printf("The elemnts in the linked list are : ");
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
void delete(int x)
{
	if(head==NULL)
	printf("linked list is empty ");
	else
	{
		struct node *temp=head;
		struct node *temp1=head->next;
		if(temp->data==x)
		{
			head=temp->next;
			free(temp);
		}
		else
		{
		while(temp1->data!=x)
		{
			temp1=temp1->next;
			temp=temp->next;
		}
		temp->next=temp1->next;
		free(temp1);
	}
		
		
	}
	
}

void display()
{
	struct node *temp=head;
	if(head==NULL)
	printf("linked list is my empty ");
	while(temp!=NULL)
	{
		printf("%d------------%u\n",temp->data,temp);
		temp=temp->next;
	}
}
/*
OUTPUT
enter your choice 1.insert 2.Delete 3.display1
Enter the element to insert12
press 1 to continue :1
enter your choice 1.insert 2.Delete 3.display2
Enter the element to delete12
press 1 to continue :1
enter your choice 1.insert 2.Delete 3.display3
The elemnts in the linked list are :linked list is my empty press 1 to continue :1
enter your choice 1.insert 2.Delete 3.display1
Enter the element to insert34
press 1 to continue :1
enter your choice 1.insert 2.Delete 3.display1
Enter the element to insert23
press 1 to continue :1
enter your choice 1.insert 2.Delete 3.display3
The elemnts in the linked list are : 34------------1734512
23------------1734544
press 1 to continue :1
enter your choice 1.insert 2.Delete 3.display2
Enter the element to delete23
press 1 to continue :1
enter your choice 1.insert 2.Delete 3.display3
The elemnts in the linked list are : 34------------1734512
press 1 to continue :
*/

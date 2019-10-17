//Reverse of Single Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void insert(int,int);
void display();
//function for reverse
void reverse()
{
	struct node *current,*next,*prev;
	current=head;
	prev=NULL;//To Store the previous Node
	while(current!=NULL)
	{
		next=current->next;//To store the next node
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
}
int main()
{
	int x,ch,p;
	do
	{
		printf("enter your choice 1.insert 2.display3.reverse");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the element to insert");
					scanf("%d %d",&x,&p);
					insert(x,p);
					break;
			case 2:printf("The elemnts in the linked list are : ");
					display();
					break;
			case 3:reverse();
					display();
					break;
			default:printf("enter a valid choice");
		}
		printf("press 1 to continue :");
		scanf("%d",&ch);
	}while(ch==1);
}

void insert(int x,int p)
{
	int i;
	struct node *temp= (struct node*)malloc(sizeof(struct node)),*temp1,*temp2;
	temp->data=x;
	if(p==1)
	{
		temp->next=head;
		head=temp;
		return;
	}
	temp1=head;
	for(i=1;i<p-1;i++)
	temp1=temp1->next;
	temp->next=temp1->next;
	temp1->next=temp;
}

void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d------------%u\n",temp->data,temp);
		temp=temp->next;
	}
}
/*
OUTPUT:
enter your choice 1.insert 2.display3.reverse1
Enter the element to insert3 1
press 1 to continue :1
enter your choice 1.insert 2.display3.reverse1
Enter the element to insert4 1
press 1 to continue :1
enter your choice 1.insert 2.display3.reverse1
Enter the element to insert7 2
press 1 to continue :1
enter your choice 1.insert 2.display3.reverse1
Enter the element to insert78 1
press 1 to continue :1
enter your choice 1.insert 2.display3.reverse2
The elemnts in the linked list are : 78------------9861072
4------------9861008
7------------9861040
3------------9860976
press 1 to continue :1
enter your choice 1.insert 2.display3.reverse3
3------------9860976
7------------9861040
4------------9861008
78------------9861072
*/

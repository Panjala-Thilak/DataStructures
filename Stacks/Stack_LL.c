//Implementation of stack using Linked list
#include<stdio.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int top=-1;
void display();
int pop();
void push();
int main()
{
	int ch,x,c,n;
	do
	{
		printf("enter your choice 1.push 2.pop");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("enter the element to be inserted ");
					scanf("%d",&x);
					push(x);
					display();
				break;
				
			case 2:
						if(top==-1)
						printf("stack underflow \n");
						else
						{
							n=pop();
						printf("the poped element is %d \n",n);
						display();
					break;
				}
			default:printf("enter the valid choice ");

					
		}
		printf("\n enter 1 to continue");
		scanf("%d",&c);
	}while(c==1);
	
	return 1;
}
void push(int x)
{
	top++;
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
int pop()
{
	int x;
	struct node *temp=head;
	head=temp->next;
	 x=temp->data;
	free(temp);
	return x;
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\n ",temp->data);
		temp=temp->next;
	}
}

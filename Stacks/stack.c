//Implementation of stack
#include<stdio.h>
#define max 10
int stack[max];
int top=-1;
void display();
int pop();
void push();
int main()
{
	int ch,x,c,n;
	do
	{
		printf("enter ur choice 1.push 2.pop");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:if(top==max-1)
					printf("stack overflow");
					else
					{
					printf("enter the element to be inserted ");
					scanf("%d",&x);
					push(x);
					display();
				}
				break;
			case 2:if(top==-1)
					printf("stack underflow ");
					else
					{
						n=pop();
						printf("the poped element is %d",n);
						display();
					}
					break;
			default:printf("enter the valid choice ");

					
		}
		printf("\n enter 1 to continue");
		scanf("%d",&c);
	}while(c==1);
	
	return 1;
}
void push(int x)
{
	stack[++top]=x;
}
int pop()
{
	return stack[top--];
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d->",stack[i]);
	}#include<stdio.h>
#define max 10
int stack[max];
int top=-1;
void display();
int pop();
void push();
int main()
{
	int ch,x,c,n;
	do
	{
		printf("enter ur choice 1.push 2.pop");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:if(top==max-1)
					printf("stack overflow");
					else
					{
					printf("enter the element to be inserted ");
					scanf("%d",&x);
					push(x);
					display();
				}
				break;
			case 2:if(top==-1)
					printf("stack underflow ");
					else
					{
						n=pop();
						printf("the poped element is %d \n",n);
						display();
					}
					break;
			default:printf("enter the valid choice ");

					
		}
		printf("\n enter 1 to continue");
		scanf("%d",&c);
	}while(c==1);
	
	return 1;
}
void push(int x)
{
	stack[++top]=x;
}
int pop()
{
	return stack[top--];
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d->",stack[i]);
	}
}

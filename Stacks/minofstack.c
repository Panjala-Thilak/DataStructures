//Minimum element in the stack
#include<stdio.h>
#define max 10
int stack[max];
int minstack[max];
int top=-1;
int top1=-1;
void display();
int min;
int pop();
void push(int );
void push1(int );
int pop1();
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
					if(top1==-1)
					{
						min=x;
					}
					if(min>x)
					push1(x);
					else
					push1(min);
					push(x);
					printf("the elements in the stack are:\n ");
					display();
					printf("the minimum element in the stack is %d",minstack[top]);
				}
				break;
			case 2:if(top==-1)
					printf("stack underflow ");
					else
					{
						n=pop();
						pop1();
						printf("the poped element is %d \n",n);
							printf("the elements in the stack are:\n");
						display();
						printf("the minimum element in the stack is %d",minstack[top]);
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
		printf("%d\n",stack[i]);
	}
}
void push1(int x)
{
	minstack[++top1]=x;
}
int pop1()
{
	return minstack[top1--];
}
/*
OUTPUT
enter ur choice 1.push 2.pop1
enter the element to be inserted 2
the elements in the stack are:
 2
the minimum element in the stack is 2
 enter 1 to continue1
enter ur choice 1.push 2.pop1
enter the element to be inserted 1
the elements in the stack are:
 1
2
the minimum element in the stack is 2
 enter 1 to continue1
enter ur choice 1.push 2.pop2
the poped element is 1
the elements in the stack are:
2
the minimum element in the stack is 2
 enter 1 to continue
 */

//Maximum element in the stack
#include<stdio.h>
#define maxi 10
int stack[maxi];
int maxstack[maxi];
int top=-1;
int top1=-1;
void display();
int max;
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
			case 1:if(top==maxi-1)
					printf("stack overflow");
					else
					{
					printf("enter the element to be inserted ");
					scanf("%d",&x);
					if(top1==-1)
					{
						max=x;
					}
					if(max<x)
					push1(x);
					else
					push1(max);
					push(x);
					printf("the elements in the stack are:\n ");
					display();
					printf("the minimum element in the stack is %d",maxstack[top]);
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
						printf("the minimum element in the stack is %d",maxstack[top]);
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
	maxstack[++top1]=x;
}
int pop1()
{
	return maxstack[top1--];
}
/*
OUTPUT:
enter ur choice 1.push 2.pop1
enter the element to be inserted 12
the elements in the stack are:
 12
the minimum element in the stack is 12
 enter 1 to continue1
enter ur choice 1.push 2.pop1
enter the element to be inserted 34
the elements in the stack are:
 34
12
the minimum element in the stack is 34
 enter 1 to continue1
enter ur choice 1.push 2.pop2
the poped element is 34
the elements in the stack are:
12
the minimum element in the stack is 12
 enter 1 to continue
 */

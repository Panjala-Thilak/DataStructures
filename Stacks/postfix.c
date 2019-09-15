//Implementation of stack
#include<stdio.h>
#define max 10
char stack[max];
int top=-1;
void display();
int pop();
void push(char );
int ispush(char );
int ispop(char );
char infix[10];
int main()
{
	int ch,x,c,n,i,j;
		printf("enter the infix expression ");
		gets(infix);
		for(i=0;infix[i]!='\0';i++)
		{
			if(isdigit(infix[i]))
			printf("%c",infix[i]);
			else
			{
			if(ispush(infix[i]))
			push(infix[i]);
			else
			{
				n=top;
				for(j=0;j<=n;j++)
				{
					if(ispop(infix[i]))
					{
						char s=pop();
				printf("%c",s);
			}
			else
			break;
		}
		push(infix[i]);
			}
		}
	}
	for(i=top;i>=0;i--)
	printf("%c",stack[i]);
	return 1;
}
int ispush(char ch)
{
	if(top==-1)
	return 1;
	else if((ch=='*'||ch=='/'||ch=='%')&&(stack[top]=='+'||stack[top]=='-'))
	return 1;
	else
	return 0;
}
int ispop(char ch)
{
	if(ch=='+'||ch=='-')
	return 1;
	else if((ch=='*'||ch=='/'||ch=='%')&&(stack[top]=='*'||stack[top]=='/'||stack[top]=='%'))
	return 1;
	else
	return 0;
}


void push(char x)
{
	stack[++top]=x;
}
int pop()
{
	return stack[top--];
}

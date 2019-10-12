//Program Reverse substring between each pair of parentheses using stacks
#include<stdio.h>
#include<stdlib.h>
int top=-1;
char stack[100];
//display method
void display()
{
	for(int i=0;i<=top;i++)
	if(stack[i]!='(')
	printf("%c",stack[i]);
}
void push(char ch)
{
	top++;
	stack[top]=ch;
}
char pop()
{
	return stack[top--];
}
int main()
{
		int n,k,i;
		char s[100],ch[100];
		printf("enter the string");
		scanf("%s",s);
		for(i=0;s[i]!='\0';i++)
		{
				int flag=0;
				if(s[i]!=')')
				{	
				push(s[i]);
				}
				if(s[i]==')')
				{
					int k=0;
					while(stack[top]!='(')//poping all the elements in the stack till stack[top] encounter (
					{
				
						char c=pop();
						ch[k]=c;//storing all the poped elements into char array
						k++;
					}
					char c=pop();
					ch[k]='\0';
					flag=1;
				}
				if(flag==1)
				{
					for(n=0;ch[n]!='\0';n++)
					push(ch[n]);//pushing all the elements in char array into stack
				}
		}
		display();
		return 0;
}
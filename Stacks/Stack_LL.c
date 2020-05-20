//Implementation of stack using Linked list
#include<stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top;
void push(int x)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop()
{
    struct node *temp=top;
    if(top==NULL)
    printf("Stack underflow\n");
    else
    {
        top=temp->next;
        temp->next=NULL;
        free(temp);
    }
}
void display()
{
    if(top==NULL)
    printf("stack is empty");
    else
    {
    struct node *temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    }
}
void peek()
{
    if(top==NULL)   
    printf("stack is empty");
    else
    printf("Top of the stack is %d",top->data);
}
int main()
{
    int ch,x,c,n;
	do
	{
		printf("enter your choice 1.push 2.pop 3.peek ");
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
			        pop();
				    display();
					break;
			case 3:
			        peek();
			        break;
			default:printf("enter the valid choice ");
		}
		printf("\n enter 1 to continue ");
		scanf("%d",&c);
	}while(c==1);
    return 0;
}

/*OUTPUT
enter your choice 1.push 2.pop 3.peek 1                                                                                          
enter the element to be inserted 12                                                                                              
12                                                                                                                               
 enter 1 to continue 1                                                                                                           
enter your choice 1.push 2.pop 3.peek 1                                                                                          
enter the element to be inserted 42    
enter 1 to continue 1                                                                                                           
enter your choice 1.push 2.pop 3.peek 2                                                                                          
12                                                                                                                               
 enter 1 to continue 1                                                                                                           
enter your choice 1.push 2.pop 3.peek 2                                                                                          
stack is empty   
 /*

//Priority Queue using Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    int priority;
    struct node *next;
}*head=NULL;
void insert(int x,int pri)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->priority=pri;
    if(head==NULL)
    {
     head=temp;
     return;
    }
    struct node *start=head;
    while (start->next != NULL &&start->next->priority < pri) { 
            start = start->next; 
        } 
    temp->next=start->next;
    start->next=temp;
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
int del()
{
    struct node *temp=head;
    head=temp->next;
    int x=temp->data;
    free(temp);
    return x;
}
int main()
{  int ch,m,d;
    do
    {
    printf("enter the ypur choice 1.insert 2.display 3.delete:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("enter the data and priority ");
               int x,pri;
               scanf("%d %d",&x,&pri);
               insert(x,pri);
               break;
        case 2:display();
               break;
        case 3:d=del();
               printf("The deleted element is %d\n",d);
               break;
       default:printf("enter a valid choice\n");
    }
    printf("enter 1 to continue....\n");
    scanf("%d",&m);
    }while(m==1);
    return 0;
}
/*OUTPUT
enter the your choice 1.insert 2.display 3.delete:1                                                                 
enter the data and priority 3 0                                                                                     
enter 1 to continue....                                                                                            
1                                                                                                                  
enter the your choice 1.insert 2.display 3.delete:1                                                                 
enter the data and priority 5 2                                                                                     
enter 1 to continue....                                                                                            
1                                                                                                                  
enter the your choice 1.insert 2.display 3.delete:1                                                                 
enter the data and priority 8 1                                                                                     
enter 1 to continue....                                                                                            
1                                                                                                                  
enter the your choice 1.insert 2.display 3.delete:2                                                                 
3  8  5                                                                                                            
enter 1 to continue....                                                                                            
1                                                                                                                  
enter the your choice 1.insert 2.display 3.delete:3                                                                 
The deleted element is 3                                                                                           
enter 1 to continue....                                                                                            
1                                                                                                                  
enter the your choice 1.insert 2.display 3.delete:2                                                                 
8  5                                                                                                                
*/
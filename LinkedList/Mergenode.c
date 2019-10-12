//Program for to find merging node in given two linked lists
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode *temp=head1;
SinglyLinkedListNode *temp1=head2;
int f=0,f1=0,x;
while(temp!=NULL)
{
    temp=temp->next;
    f++;//finding length of list 1
}
while(temp1!=NULL)
{
    temp1=temp1->next;
    f1++;////finding length of list 2
}
temp=head1;
temp1=head2;
if(f1>f)//if list2 length is greater than list1
{
    for(int i=0;i<f1-f;i++)
    temp1=temp1->next;//traverse the temp1 pointer differnce of two lists times
    while(temp!=NULL&&temp1!=NULL)
    {
        if(temp==temp1)
        {
            x=temp->data;
            break;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
}
if(f1<=f)//if list1 length is greater than or equal list2
{
    for(int i=0;i<f-f1;i++)
    temp=temp->next;//traverse the temp pointer differnce of two lists times
    while(temp!=NULL&&temp1!=NULL)
    {
        if(temp==temp1)
        {
            x=temp->data;
            break;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
}
return x;
}
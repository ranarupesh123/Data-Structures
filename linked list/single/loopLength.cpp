int length(Node*slow)
{
    Node*temp=slow;
    int len=1;
    while(temp->next!=slow){
        len++;
        temp=temp->next;
    }
    return len;
}
int countNodesinLoop(struct Node *head)
{
    Node*slow=head,*fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return length(slow);
        }
    }
    return 0;
}
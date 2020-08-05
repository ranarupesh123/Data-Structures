Node* rev(Node**head)
{
    Node*curr=*head,*prev=NULL,*nextNode=NULL;
    while(curr)
    {
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}
bool compare(Node*head1,Node*head2)
{
    Node*temp1=head1,*temp2=head2;
    while(temp1&& temp2)
    {
        if(temp1->data!=temp2->data)
        {
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}
bool isPalindrome(Node *head)
{
    if(head && head->next)
    {
        Node*slow=head,*fast=head;
        Node*head2=NULL;
        Node*slow_prev=NULL;
        while(fast && fast->next)
        {
            slow_prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL)
        {
            slow=slow->next;
        }
        head2=rev(&slow);
        return compare(head,head2);
        
    }
    return true;
}


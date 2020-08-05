struct Node* reverseList(struct Node *head)
{
    Node * curr=head,*nextnode=NULL,*prev=NULL;
    while(curr)
    {
        nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    return prev;
}

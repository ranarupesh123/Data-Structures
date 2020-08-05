struct node *reverse (struct node *head, int k)
{ 
    node*curr=head,*prev=NULL,*nextNode=NULL;
    int count=k;
    while(curr && count--)
    {
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    if(curr)
    {
        head->next=reverse(curr,k);
    }
    return prev;
}

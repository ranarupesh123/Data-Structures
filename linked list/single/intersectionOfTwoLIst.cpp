Node*insert(Node**head,int x)
{
    Node*newnode=(Node*)malloc(sizeof(Node));
    Node*temp=*head;
    newnode->data=x;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        return *head;
    }
    else
    {
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return *head;
    
}
Node* findIntersection(Node* head1, Node* head2)
{
    Node*temp1=head1,*temp2=head2;
    Node*head3=NULL;
    while(temp1 && temp2)
    {
        if(temp1->data==temp2->data)
        {
            head3=insert(&head3,temp1->data);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->data>temp2->data)
        {
            temp2=temp2->next;
        }
        else
        {
            temp1=temp1->next;
        }
    }
    return head3;
}
Node * removeDuplicates( Node *head)
{
    Node*temp=head;
    set<int>s;
    s.insert(temp->data);
    while(temp->next)
    {
        if(s.find(temp->next->data)!=s.end())
        {
            temp->next=temp->next->next;
        }
        else
        {
            temp=temp->next;
            s.insert(temp->data);
        }
    }
    return head;
}

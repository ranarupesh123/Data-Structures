int intersectPoint(Node* head1, Node* head2)
{
    unordered_set<Node*>s;
    Node*temp=head1;
    while(temp)
    {
        s.insert(temp);
        temp=temp->next;
    }
    temp=head2;
    while(temp)
    {
        if(s.find(temp)!=s.end())
        {
            return temp->data;
        }
        temp=temp->next;
    }
    return -1;
}

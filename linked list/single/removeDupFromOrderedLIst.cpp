Node *removeDuplicates(Node *root)
{
    Node*curr=root;
    while(curr && curr->next)
    {
        if(curr->data==curr->next->data)
        {
            Node*temp=curr->next;
            curr->next=temp->next;
            free(temp);
        }
        else
        {
            curr=curr->next;
        }
    }
    return root;
}
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*next;
};
node *insert(node**head,int x)
{
    node*newNode=(struct node*)malloc(sizeof(node));
    newNode->data=x;
    newNode->next=NULL;
    if(*head==NULL)
    {
        *head=newNode;
        return *head;
    }
    else
    {
        node*temp=*head;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
    return *head;
}
void printList(node**head)
{
    node*temp=*head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        node*even=NULL,*odd=NULL;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                even=insert(&even,x);
            }
            else
            {
                odd=insert(&odd,x);
            }
        }
        if(even==NULL)
        {
            printList(&odd);
        }
        else
        {
            node*temp=even;
            while(temp->next)
            {
                temp=temp->next;
            }
            temp->next=odd;
            printList(&even);
        }
    }
}
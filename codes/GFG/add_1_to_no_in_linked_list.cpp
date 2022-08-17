#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
}; 
Node* reverse(Node *head)
{
    Node *c= head,* p= NULL,*n =c->next;
    while(c!=NULL)
    {
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL)
        n=n->next;
    } 
    return p;
}
    Node* addOne(Node *head) 
    { Node *temp= head;
        head =reverse(temp);
         temp =head;
    temp= head;
        while(temp!=NULL)
        {
            if(temp->data==9)
            { //cout<<" a "<<endl;
                temp->data=0;
                if(temp->next==NULL)
                {
                    temp->next= new Node;
                    temp=temp->next;
                    temp->data= 1;
                    temp->next=NULL;
                }
                temp= temp->next;
            }
            else 
            { temp->data= temp->data +1;
                break;
            }
        } temp= head;
        head= reverse(temp);
        return head;
    }
int main()
{
    int n;
    cin>>n;
    Node *head= NULL;
    Node *temp =head;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;if(i==0)
        {
                head= new Node;
                temp= head;
                temp->data=x;
                temp->next= NULL;
                continue;               
        }
        temp->next= new Node;
        temp= temp->next;
        temp->data=x;
        temp->next=NULL;
    } temp= head;
    temp =addOne(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
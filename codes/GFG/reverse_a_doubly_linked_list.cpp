#include<bits/stdc++.h>
using namespace std;
struct Node
{ int data;
Node *next;
Node *prev;
};
Node* reverseDLL(Node * head)
{if(head==NULL || head->next ==NULL)
return head;
    Node *t = head,* n= t->next,*nh,*p= NULL;
    while(t!=NULL)
    { t->next= p;
        t->prev= n;
    p= t;
    t= n;
    if(n!=NULL)
    n= n->next;
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    Node* head=NULL,*t=head,*p=NULL;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(i==0)
        {
            head= new Node;
            t= head;
            t->prev= NULL;
            t->data= x;
            t->next= NULL;
            continue;
        }
        t->next =new Node;
        p= t;
        t= t->next;
        t->prev= p;
        t->data= x;
        t->next= NULL;
    }
    t= reverseDLL(head);
    while(t!= NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}
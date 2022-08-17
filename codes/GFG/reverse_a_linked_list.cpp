#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
};

struct Node* reverseList(struct Node *head)
    {
            if(head== NULL)
            return NULL;
        Node *p =NULL;
        Node *c= head;
        Node *n= c->next;
        while(c->next!= NULL)
        {
            c->next = p;
            //cout<<" c "<<c->val<<endl;
            p =c;
            c= n;
            if(n!= NULL)
            n= n->next;
        }
        c->next= p;
        return c;
    }

int main()
{   struct Node *head= NULL;
    int n;
    cin>>n;
    int y;
    cin>>y;
    head= new Node;
    head->val = y;
    head->next= NULL;
Node *temp= NULL;
temp = head;
    for(int i=1;i<n;i++)
    {   int x;
        cin>>x;
        temp->next= new Node;
        temp= temp->next;
        temp->val= x;
        temp->next= NULL;
    }
  
    temp = reverseList(head);
    while(temp!= NULL)
    {
        cout<<temp->val<<" ";
        temp= temp->next;        
    }
}
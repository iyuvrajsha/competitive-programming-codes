#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};
Node *removeDuplicates(Node *head)
{
   Node *temp =head;
   Node *p =NULL;
   while(temp!= NULL && temp->next!= NULL)
   { //cout<<" val "<<temp->val;
       if(temp->val == temp->next->val)
       {
           Node * d= temp->next;
           temp->next= d->next;
           delete d; 
           continue;
       }
       //cout<<" 2 ";
       temp= temp->next;
   } //cout<<" o ";
   return head;
}

int main()
{
    int n;
    cin>>n;
    Node *head=NULL;
    Node *temp=head;
    for(int i=0;i<n;i++)
    {int x; cin>>x;
        if(i==0)
        {
            head= new Node;
            temp= head;
            temp->val= x;
            continue;
        }
        temp->next= new Node;
        temp= temp->next;
        temp->val= x;
    } 
    temp->next= NULL;
temp= head;
    temp= removeDuplicates(head);
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp= temp->next;
    }
}

#include<bits/stdc++.h>
using namespace std;
struct Node
{
 int val;
 Node *next;
};
Node * move(Node *head)
{ if(head==NULL || head->next==NULL)
return head;
    Node *temp= head; Node *p= NULL;
    while(temp!= NULL)
    {
        if(temp->next==NULL)
        {
            p->next= NULL;
        }
        p= temp;
        temp=temp->next;
    }
    p->next= head;
    
    return p;
}
int main()
{
    int n;
    cin>>n;
    Node *head =NULL;
    Node *temp= head;
    for(int i= 0;i<n;i++)
    {int x; cin>>x;
        if(i==0)
        {
            head= new Node;
            temp= head;
            temp->val= x;
            temp->next=NULL; continue;
        }
        temp->next=new Node;
        temp= temp->next;
        temp->val= x;
        temp->next= NULL;
    } temp= move(head);
    while(temp!=NULL)
    {
        cout<<temp->val<<" " ;
        temp= temp->next;
    }

}
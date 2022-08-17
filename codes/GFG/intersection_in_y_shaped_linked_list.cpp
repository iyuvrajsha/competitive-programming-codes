#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next;
};
int intersectPoint(Node* head1, Node* head2)
{
    unordered_map<Node*, int> m;
    Node *t1= head1,*t2= head2,*a;
    int s=0;
    while(t1!=NULL && t2!=NULL)
    {
        if(t1== t2)
        {
            a= t1;
            break;
        }
        else 
        {
            t1= t1->next;
            t2= t2->next;
        }
        if(t1==NULL && s<2)
        {
            t1= head2;
            s++;
        }
        if(t2==NULL && s<2)
        {
            t2= head1;
            s++;
        }
    }
  
    return a->data;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    Node *head1=NULL,*head2=NULL,*temp1=head1,*temp2=head2,*co;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(i==0)
        {
            head1= new Node;
            temp1= head1;
            temp1->data= x;
            temp1->next=NULL;if(i== k)
        {
            co= temp1;
        } continue;
        } temp1->next= new Node;
        temp1 =temp1->next;
        temp1->data = x;
        temp1->next=NULL;
        if(i== k)
        {
            co= temp1;
        } 
    }
    for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        if(i==0)
        {
            head2= new Node;
            temp2= head2;
            temp2->data= x;
            temp2->next=NULL; 
            continue;
        } temp2->next= new Node;
        temp2 =temp2->next;
        temp2->data = x;
        temp2->next=NULL;
    } temp2->next =co;
    temp2= head2;
    /*while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2= temp2->next;
    }*/
    cout<<intersectPoint(head1,head2);    
}
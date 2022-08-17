#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int countTriplets(struct Node* head, int x) 
{ 
    Node *t=head,*t2= t->next;int ct=0;
    if(t==NULL || t->next==NULL || t->next->next== NULL)
    return 0;
    while(t!=NULL)
    { unordered_set<int> s;
     int c= x- t->data;
     t2=t->next;
     while(t2!=NULL)
     {
         if(s.find(c-t2->data)!=s.end())
         {
             ct++; t2=t2->next;
             continue;
         }
         s.insert(t2->data);
         t2=t2->next;
     } t=t->next;
    }
    return ct;
    
} 
int main()
{
    int n,y;
    cin>>n>>y;
    Node *head=NULL,*temp=head;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(i==0)
        {
            head= new Node;
            temp=head;
            temp->data= x;
            temp->next= NULL;
            continue;
        }
        temp->next=new Node;
        temp=temp->next;
        temp->data= x;
        temp->next=NULL;
    }
cout<<countTriplets(head,y);
}
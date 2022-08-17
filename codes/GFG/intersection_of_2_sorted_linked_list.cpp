#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node* findIntersection(Node* head1, Node* head2)
{
    Node *t1= head1,*t2= head2,*head3=NULL, *t3= head3;
    while(t1 != NULL && t2 != NULL)
    {
        if(t1->data == t2->data)
        {
            if(head3== NULL)
            {
                head3= new Node;
                t3= head3 ;
                t3->data= t1->data;
                t3->next=NULL;
            }
            else 
            {
                t3->next = new Node;
                t3=t3->next;
                t3->data= t1->data;
                t3->next=NULL;
            }
            t1=t1->next;
            t2= t2->next;
        }
        else if(t1->data > t2->data )
        {
            t2=t2->next;
        }
        else t1=t1->next;
    }
  return head3;
}
int main()
{
    int n,m;
    cin>>n>>m;
    Node *head=NULL,*head2=NULL;
    Node *temp =head, *temp2=head2;
    for(int i= 0;i<n;i++)
    {
        int x;
        cin>>x;
        if(i==0)
        {
            head= new Node;
            temp= head;
            temp->data= x;
            temp->next= NULL;
            continue;
        }
        temp->next=new Node;
        temp=temp->next;
        temp->data= x;
        temp->next= NULL;
    }
    for(int i= 0;i<m;i++)
    {
        int x;
        cin>>x;
        if(i==0)
        {
            head2= new Node;
            temp2= head2;
            temp2->data= x;
            temp2->next= NULL;
            continue;
        }
        temp2->next=new Node;
        temp2=temp2->next;
        temp2->data= x;
        temp2->next= NULL;
    }
    Node *a= findIntersection(head,head2);
    temp = a;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "; 
        temp=temp-> next;
    }
}
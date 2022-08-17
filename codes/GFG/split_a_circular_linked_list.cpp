#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{int n=0;
    Node *fast=head,*slow=head,*end,*p =head;; bool f= true; 
    while((fast !=head )|| f)
    {fast= fast->next;n++;
    if(fast!=head)
    {n++; p= slow;
        slow= slow->next;
        fast=fast->next;
    }
        if(fast->next->next==head)
        {
            end= fast->next;
        }
        else if(fast->next == head)
        {
            end= fast;
        }
        f=false;
    } if(fast->next == head)
        {
            end= fast;
        }
    /*cout<<" fast "<<fast->data<<endl;
     cout<<" slow "<<slow->data<<endl;
     cout<<" end "<<end->data<<endl<<" n "<<n<<endl;;*/
     if(n%2== 0)
     {*head1_ref= head;
        *head2_ref= slow; 
        p->next= NULL;
     }
     else{   
          *head1_ref= head;
    *head2_ref= slow->next;
    slow->next=NULL;
     }
    end->next= NULL;
}
int main()
{
    int n;
    cin>>n;
    Node *head=NULL,*temp=head;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(i==0)
        {
            head= new Node;
            temp= head;
            temp->data= x;
            temp->next= head;
            continue;
        }
        temp->next= new Node;
        temp=temp->next;
        temp->data= x;
        temp->next= head;
    } Node *t1,*t2;
    splitList(head,&t1,&t2);
    int i=0;
    while(t1!=NULL)
    {
        cout<<t1->data<<" ";
        t1=t1->next;
        i++;
    }cout<<endl;
    while(t2!=NULL)
    {
        cout<<t2->data<<" ";
        t2=t2->next;
        i++;
    }


}


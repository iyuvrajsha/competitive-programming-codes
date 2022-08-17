#include<bits/stdc++.h>
using namespace std;
struct Node
{
 int data;
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
struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node *temp1= first,*temp2= second;
        temp1= reverseList(temp1);
        temp2= reverseList(temp2);
        Node *a= new Node;
        a->next=NULL; int c=0; int s= 0;
        Node *t= a;
        while(temp2!= NULL && temp1 !=NULL)
        {
                s= temp1->data +temp2->data +c; 
                t->next= new Node;
                t= t->next;
                t->data= s%10;
                c= s/10;
                t-> next = NULL;
                temp1=temp1->next;
                temp2=temp2->next;
        }
        while(temp2!=NULL)
        { s= temp2->data +c;
          t->next= new Node;
                t= t->next;
                t->data= s%10;
                c= s/10;
                t-> next = NULL;
            temp2= temp2->next;
        }
        while(temp1!=NULL)
        { s= temp1->data +c;
          t->next= new Node;
                t= t->next;
                t->data= s%10;
                c= s/10;
                t-> next = NULL;
            temp1= temp1->next;
        }
        if(c!=0)
        { 
                {t->next= new Node;
                t= t->next;
                t->data= c;
                
                t-> next = NULL;
                }       
         }
        t= reverseList(a->next);
        return t;
    }

int main()
{
    int n,m;
    cin>>n>>m;Node *head1=NULL,*head2= NULL;
    Node* temp =NULL;
    for(int i= 0;i<n;i++)
    { int x; cin>>x;
    if(i==0)
    {
        head1= new Node;
        temp= head1;
        temp->data=x;
        temp->next= NULL;
        continue;
    }
    temp->next= new Node;
    temp=temp->next;
    temp->data= x;
    temp->next=NULL;
    }
    for(int i= 0;i<m;i++)
    { int x; cin>>x;
    if(i==0)
    {
        head2= new Node;
        temp= head2;
        temp->data=x;
        temp->next= NULL;
        continue;
    }
    temp->next= new Node;
    temp=temp->next;
    temp->data= x;
    temp->next=NULL;
    }
temp=  addTwoLists(head1,head2);
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}

    }
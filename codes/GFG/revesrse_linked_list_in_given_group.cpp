#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node * next;
};
 void f(struct node *s,struct node*e )
{
    node *p= NULL;
    node* c= s;
    node* n= c->next;
    while(p!=e)
    {
        c->next= p;
        p=c;
        c=n;
        if(n!= NULL)
        n= n->next;    
    }
}
    struct node *reverse (struct node *head, int k)
     
   { 
     if(head==NULL || head->next == NULL || k==1)
        {  //cout<<1;
            return head;
            
        } //cout<<1<<endl;
         
       node *d= new node; d->val= -1;
       d->next= head;  node *bs= d; node*e = head;
       
        int i=0;
        while(e!=NULL)
        { i++;  //cout<<1;
        if(i%k==0)
        {   //cout<<2;
            node *temp= e->next,*s= bs->next; 
            f(s,e);
            bs->next= e;
            s->next= temp;
            bs= s;
            e= temp;
        }
        else e= e->next;        
    }
        return d->next;
    }
int main()
{
    int n,k;
    cin>>n>>k;
    node* head= NULL;
    node *temp= NULL;
    for(int i=0;i<n;i++)
    { int x;
        cin>>x;
        if(i==0)
        {
            head= new node;
            temp= head;
            head->val= x;
        }
        else
        {
            
        temp->next= new node;
        temp =temp->next;
        temp->val= x; 
        }
    } temp->next=NULL;
    temp= reverse(head,k);
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp= temp->next;
    }
}

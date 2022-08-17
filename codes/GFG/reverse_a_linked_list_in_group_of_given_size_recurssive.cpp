#include<bits/stdc++.h>
using namespace std;
struct node
{
int val;
node *next;
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
    { //cout<<" c";
        if(head==NULL || head->next == NULL || k==1)
        {  //cout<<1;
            return head;
            
        } //cout<<1<<endl;
        int i= k-1; node *s= head; node*e = head;
        while(i--)
        {  e= e->next;
        //cout<<2<<endl;
        if(e==NULL)
        { //cout<<2;
            return head;
        }
        //cout<<3<<endl;
        } //cout<<4<<endl;
        node * nextH= reverse(e->next, k);
        //cout<<"a";
        f(s,e);
        s->next= nextH;
       // cout<<5<<endl;
        return e;
    }

int main()
{
    int n,v,k;
    cin>>n>>k;
    node* head= new node;
    cin>>v;
    head->val= v;
    node *temp = head;
    temp->next =NULL;
    for(int i =1;i<n;i++)
    {   int x;
        cin>>x;
        temp->next = new node;
        temp =temp-> next;
        temp->val= x;
    } temp->next= NULL;
    temp = reverse(head,k);
    for(int i= 0;i<n;i++)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }


}
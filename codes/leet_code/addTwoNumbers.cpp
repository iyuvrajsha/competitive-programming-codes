#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
ListNode* f(ListNode *l1,ListNode *l2)
{ int c= 0,i=0;
    ListNode *head= new ListNode;
    head->next=NULL;
    ListNode *temp= head;
    while(l1 || l2)
    { //cout<<l1->val<<l2->val<<" cc"<<endl;
        if (l1!=NULL && l2!=NULL)
        {
            int x= l1->val+l2->val+c;
            //cout<<"xh"<<x<<endl;
            if (x>9)
            {   if (i==0)
            {
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
            }
            else{
                //cout<<"hh"<<endl;
                temp->next =new ListNode;
                temp=temp->next;
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
            }
    
            }
            else
            {
                if (i==0)
            {
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
                i++;
            }
            else{
                temp->next=new ListNode;
                temp=temp->next;
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
            }
            }
        }
        else if (l1)
        {
            int x= l1->val+c;
            ////cout<<'x1'<<x<<endl;
            if (x>9)
            {   if (i==0)
            {
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
                i++;
            }
            else{
                temp->next=new ListNode;
                temp=temp->next;
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
            }
            }
            else
            {
                if (i==0)
            {
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
                i++;
            }
            else{
                temp->next=new ListNode;
                temp=temp->next;
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
            }
            }
        }
        else if (l2)
        {
            int x= l2->val+c;
            //cout<<'x2'<<x<<endl;
            if (x>9)
            {   if (i==0)
            {
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
                i++;
            }
            else{
                temp->next=new ListNode;
                temp=temp->next;
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
            }
            }
            else
            {
                if (i==0)
            {
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
                i++;
            }
            else{
                temp->next=new ListNode;
                temp=temp->next;
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
            }
            }
        }
        if(l1)
        {l1=l1->next;
        }
        if(l2)
        {l2=l2->next;
        }
        //cout<<"c "<<c<<" i "<<i<<endl;
        i++;
    }
    while(c)
    { int x=c;
        if (i==0)
            {
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
                i++;
            }
            else{
                temp->next=new ListNode;
                temp=temp->next;
                temp->val=x%10;
                c=x/10;
                temp->next=NULL;
            }
    }
    return head;
}
int main()
{
    int n,m;
    cin>>n>>m;
    ListNode *head=new ListNode;
    head->next=NULL;
    ListNode *temp= head;
    for(int i=0;i<n;i++)
    { 
        if(i==0)
        {
            int x;
            cin>>x;
            temp->val=x;
            temp->next=NULL;
            continue;
        }
        temp->next=new ListNode;
        temp= temp->next;
        int x;
        cin>>x;
        temp->val= x;
        temp->next=NULL;
    }
    ListNode *head2=new ListNode;
    head2->next=NULL;
    ListNode *temp2= head2;
    for(int i=0;i<m;i++)
    { 
        if(i==0)
        {
            int x;
            cin>>x;
            temp2->val=x;
            temp2->next=NULL;
            continue;
        }
        temp2->next=new ListNode;
        temp2= temp2->next;
        int x;
        cin>>x;
        temp2->val= x;
        temp2->next=NULL;
    }
    temp= head2;
    while(temp)
    {
        //cout<<temp->val;
        temp=temp->next;
    }
    temp= head;
    cout<<endl;
    while(temp)
    {
        cout<<temp->val;
        temp=temp->next;
    }
    cout<<endl;
    temp= f(head,head2);
    cout<<endl;
    while(temp)
    {
        cout<<temp->val;
        temp=temp->next;
    }

}
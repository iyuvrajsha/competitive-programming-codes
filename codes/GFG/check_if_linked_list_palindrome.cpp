#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node * reverse(Node *head)
{ if(head== NULL || head->next==NULL)
    return head;
    Node *p=NULL;
    Node *c= head;
    Node *n= c->next;
    while(c->next!= NULL)
    {
        c->next= p;
        p=c;
        c=n;
        if(n!=NULL)
        {
            n=n->next;
        }
    } c->next=p;
    return c;
}
bool isPalindrome(Node *head)
    { 
        if(head->next ==NULL)
    {
      return true;
    }
        else if(head->next->next == NULL)
    {
        return head->data == head->next->data;
    }
    
        Node *fast=head,*slow=head,*t=head; int n=0;
        while(fast!=NULL)
        {
            fast= fast->next;n++;
            if(fast!=NULL)
            {
                slow=slow->next;
                fast=fast->next;n++;
            }
        }bool flag= true;
  //      cout<<" alow "<<slow->data<<endl<<" n "<<n<<endl;

        if(n%2==0)
        slow= reverse(slow);
        else 
        {
                slow->next =reverse(slow->next);
                slow=slow->next;
        }

//cout<<" sl "<<slow->data<<endl;
        while(slow!=NULL)
        {//cout<<" in "<<endl;
        //out<<" sl "<<slow->data<<endl;
            if(t->data != slow->data)
            {
                flag= false;
                break;
            }
            t=t->next;
            slow=slow->next;
        }
        return flag;

    }
int main()
{
    int n;
    cin>>n;
    Node *head= NULL,*temp=head;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(i==0)
        {
            head= new Node;
            temp=head;
            temp->data= x;
            temp->next=NULL;
            continue;
        }
        temp->next= new Node;
        temp=temp->next;
        temp->data= x;
        temp->next=NULL;
    }
cout<<isPalindrome(head);
}
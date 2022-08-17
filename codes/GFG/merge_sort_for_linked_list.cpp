#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next;
    };
    Node *merge(Node *head,Node *mid, Node* end)
    { 
        Node *t1=head; Node *t2=mid->next;
        Node * h3=NULL,*t3=h3;
        cout<<" x "<<endl;
        cout<<"head "<<head->data<<" end "<<end->data<<" mid "<<mid->data<<endl;
        while(t1!= NULL && t1!= mid)
        {
            cout<<" t1 dt"<<t1->data<<endl;
            t1= t1->next;
        }
         while( t2!= end->next)
        {
            cout<<" t2 dt"<<t2->data<<endl;
            t2=t2->next;
        } t1= head;
        t2=mid->next;

        while(t1!=mid->next && t2!=end->next && t2!=NULL)
        { cout<<"t1 data "<<t1->data<<" t2 "<<t2->data<<endl;
            if(t1->data<t2->data)
            {
                if(h3==NULL)
                {
                    h3= new Node;
                    t3= h3;
                    t3->data= t1->data;
                    t3->next= NULL;
                }
                else 
                {
                    t3->next= new Node;
                    t3= t3->next;
                    t3->data= t1->data;
                    t3->next=NULL;
                }
                t1=t1->next;
            }
            else
            {
                if(h3==NULL)
                {
                    h3= new Node;
                    t3= h3;
                    t3->data= t2->data;
                    t3->next= NULL;
                }
                else 
                {
                    t3->next= new Node;
                    t3= t3->next;
                    t3->data= t2->data;
                    t3->next=NULL;
                }
                t2= t2->next;
            }
            
        } cout<<" y "<<endl;
        while(t1!=mid->next)
        {cout<<"t1 data "<<t1->data<<endl;
            
                if(h3==NULL)
                {
                    h3= new Node;
                    t3= h3;
                    t3->data= t1->data;
                    t3->next= NULL;
                }
                else 
                {
                    t3->next= new Node;
                    t3= t3->next;
                    t3->data= t1->data;
                    t3->next=NULL;
                }
                t1=t1->next;
        } cout<<" ha "<<endl;
        while(t2!=end->next && t2!= NULL)
        {cout<<"t2 "<<t2->data<<endl;
            
                if(h3==NULL)
                {
                    h3= new Node;
                    t3= h3;
                    t3->data= t2->data;
                    t3->next= NULL;
                }
                else 
                {
                    t3->next= new Node;
                    t3= t3->next;
                    t3->data= t2->data;
                    t3->next=NULL;
                }
                t2= t2->next;
        } cout<<" hm "<<endl;
        cout<<" new "<<endl;
        t3= h3; int i=0; t1= head;
        while(t3!=NULL)
        {
            cout<<t3->data<<" "; i++;
            t1->data=t3->data;
            t1=t1->next;
            t3=t3->next;
        }cout<<endl;
        return head;
    }
    Node * div(Node* head, Node *end, int l)
    { if(head==NULL || head->next == NULL || head== end)
        return head;
        if(head== end)
        return head;
        Node *slow=head,*fast= head;
         if(end->next!=head)
        {
        cout<<"head "<<head->data<<" end "<<end->data<<" l "<<l<<endl;
        while(fast!= end && fast->next!=end)
        {  cout<<"fast "<<fast->data<<" slow "<<slow->data<<" end "<<end->data<<endl;
            slow=slow->next;
            /*if(fast->next->next==end)
            fast= fast->next;
            else*/
            fast= fast->next->next;
            cout<<"fast "<<fast->data<<" slow "<<slow->data<<" end "<<end->data<<endl;
        }
       cout<<"head "<<head->data<<" end "<<end->data<<" slow "<<slow->data<<" l "<<l<<endl;
        cout<<1<<endl;
        div(head,slow,1); 
        cout<<2<<endl;
        div(slow->next,fast,2);
        cout<<3<<endl;
        head= merge(head,slow,fast);
        cout<<4<<endl;
        }
        return head;
    }

    Node* mergeSort(Node* head) {
        if(head==NULL || head->next == NULL)
        return head;
        Node *slow=head,*fast= head;
        while(fast!= NULL && fast->next!=NULL)
        {
            slow=slow->next;
            /*if(fast->next->next==NULL)
            fast= fast->next;
            else*/
            fast= fast->next->next;
        }
        div(head,slow,1); div(slow->next,fast,2);
        return head;
    }

int main()
{
    int n;
    cin>>n;
    Node *head= NULL;
    Node *temp= head;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(i==0)
        {
            head=new Node;
            temp= head;
            temp->data= x;
            temp->next=NULL;
            continue;
        }
        temp->next= new Node;
        temp= temp->next;
        temp->data= x;
        temp->next=NULL;
    }
    temp= mergeSort(head);int i= 0;
    while(i<n)
    {
        cout<<temp->data<<" ";  i++;     
        temp=temp->next; 
    }

}
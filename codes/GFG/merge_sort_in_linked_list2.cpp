#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next;
    };
    Node *merge(Node *first,Node *second)
    {  //cout<<1<<endl;
        Node *ans =NULL;
        if(!first)
        return second;
        else if(!second)
        return first;
        if(first->data<= second->data)
        {
            ans= first;
            ans->next= merge(first->next,second);
        }
        else 
        {
            ans= second;
            ans->next= merge(first,second->next);
        }
        return ans;
    }
    void dividing(Node *head,Node **first,Node **second)
    {Node *slow= head,*fast= head->next;

        while(fast!=NULL)
        {
    fast=fast->next;
        if(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        }
        *first= head;
        *second = slow->next;
        slow->next=NULL;
    
    }
    void div(Node** head, int l)
    {  
    Node * first,*second,*cur= *head;
    if(cur==NULL || cur->next== NULL)// || head ->next->next==NULL)
        return;
    dividing(cur,&first,&second);
    //cout<<" a "<<endl;
     div(&first,1);
    div(&second,2);
    *head = merge(first,second);
        
    }

    Node* mergeSort(Node* head) {
        div(&head,0);
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
    } temp=head;
    temp= mergeSort(head);
    int i= 0;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";  i++;     
        temp=temp->next; 
    }

}
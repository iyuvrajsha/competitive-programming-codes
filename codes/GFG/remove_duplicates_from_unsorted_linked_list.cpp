#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node * removeDuplicates( Node *head) 
    {
        unordered_map<int, int> m;
        Node *temp= head;
        Node *d = new Node;
        d->next= head;
        d->data= -1;  Node *p= d;
        while(temp!= NULL)
        { m[temp->data]++;
            if(m[temp->data]>1 )
            {
                Node *de =temp; //cout<<" data" <<temp->data<<endl;
                p->next= temp->next;
                temp=temp->next;
                delete de; continue;                
            }
            p= temp;
            temp= temp->next;
        }
        return d->next;
    }

int main()
{
    int n;
    cin>>n;
    Node *head= NULL;
    Node *temp= head;
    for(int i= 0;i<n;i++)
    {int x; cin>>x;
        if(i==0)
        {
            head= new Node;
            temp=head;
            temp->data= x;
            continue;
        }
        temp->next= new Node;
        temp= temp->next;
        temp->data= x;
        temp->next= NULL;
    } temp= removeDuplicates(head);
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }

}
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
};
void removeLoop(Node* head)
    {
        unordered_map<Node *,int> m;
        Node *temp= head; Node* pre;
        while(temp!= NULL)
        {
            m[temp]++;
            if(m[temp]== 2)
            {
                pre->next= NULL;
                break;
            }
            pre= temp;
            temp=temp->next;
        }
    }

int main()
{
    int n,c;
    cin>>n>>c;
    Node *head= NULL;
    Node *temp =head; Node *co; 
    for(int i= 0;i<n;i++)
    { int x; cin>>x;
        if(i==0)
        {
            head= new Node;
            temp=head;
            temp->val= x; continue;
        }
        temp->next= new Node;
        temp=temp->next;
        temp->val= x;
        if(i== c)
        {
            co= temp;
        }
    }  if(c>=0)
    {
        temp->next= co;
    }
    else temp->next = NULL;
    
    //removeLoop(head);
    temp= head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    } cout<<endl;
}
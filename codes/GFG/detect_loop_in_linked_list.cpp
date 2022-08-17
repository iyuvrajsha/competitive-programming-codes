#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node * next;
};
bool detectLoop(Node* head)
    {       Node* temp= head;
        unordered_map<Node *, int> m;
        while(temp != NULL)
        {
            m[temp]++;
            if(m[temp]== 2)
            {
                return true;
            }
            temp= temp->next;
        }
        return false;
    }   
     
int main()
{
    int n;
    cin>>n;
    Node *head= NULL;
    Node *temp= head;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {int x;
        cin>>x;
            head= new Node;
            temp= head;
            temp->val= x;
            continue;
        }
        int x;
        cin>>x;
            temp->next = new Node;
            temp= temp->next;
            temp->val= x;  
    } temp->next= NULL;
cout<<detectLoop(head);
}

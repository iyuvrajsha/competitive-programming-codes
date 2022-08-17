#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int countPairs(struct Node* head1, struct Node* head2, int x) {
        Node *t1= head1,*t2= head2; int ct= 0;
        unordered_map<int ,int > m;
        while(t1!=NULL)
        {
            m[x- t1->data]++;
            t1=t1->next;
        }
        while(t2!=NULL)
        {
            if(m[t2->data]>0)
            {
                ct += m[t2->data];
            }
            t2=t2->next;
        }
        return ct;
            }
int main()
{
    int n,m,y;
    cin>>n>>m>>y;
    Node *h1=NULL,*t1=h1,*h2=NULL,*t2=h2;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(i==0)
        {
            h1= new Node;
            t1= h1;
            t1->data= x;
            t1->next=NULL;
            continue;
        }
        t1->next= new Node;
        t1=t1->next;
        t1->data= x;
        t1->next= NULL;
         }
         for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        if(i==0)
        {
            h2= new Node;
            t1= h2;
            t1->data= x;
            t1->next=NULL;
            continue;
        }
        t1->next= new Node;
        t1=t1->next;
        t1->data= x;
        t1->next= NULL;
    }
    cout<<countPairs(h1,h2,y);
}
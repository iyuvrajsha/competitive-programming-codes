#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
int search(int in[],int start,int end ,int ele)
{
for(int i=start;i<=end;i++)
{
    if(in[i]==ele)
    {
        return i;
    }
}
return -1;
}
Node* getTree(int in[],int pre[],int start,int end)
{ static int idx= 0;

    if(start>end)
    {
        return NULL;
    }
    int curr= pre[idx];
    Node *root = new Node(curr);
    idx++;
    if (start==end)
    {
        return root;
    }
    //cout<<pre[0]<<" p0"<<endl;
    auto i = search(in,start,end,curr);
    root->left = getTree(in,pre,start,i-1);
    root->right = getTree(in,pre,i+1,end);
    return root;
}
Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        if(n==0)
        {
            return NULL;
        }
        Node* root = getTree(in,pre,0,n-1);
return root;
    }
void print(Node* head)
{
    if (head==NULL)
    return;
    cout<<head->data<<endl;

    print(head->left);
    print(head->right);
}

Node* takeinput()
{
    Node *head = new Node(0);
    queue<Node*> remainingNodes;
    int x;
    cin>>x;
    head->data = x;
    remainingNodes.push(head);
    while(remainingNodes.size()>0)
    {
        Node *front = remainingNodes.front();
        remainingNodes.pop();
        int x,y;
        cin>>x>>y;
        Node *leftC = new Node(0);
        Node *rightC = new Node(0);
        if (x==-1)
        {
           leftC =NULL; 
        }
        else{
        leftC->data = x;
        remainingNodes.push(leftC);
        }
        if (y==-1)
        rightC=NULL;
        else
        {
        rightC->data = y;
        remainingNodes.push(rightC);
        }
        front->left = leftC;
        front->right = rightC;
    }
return head;
}
int main()
{  //Node *head = takeinput();
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    cin>>b[i];
}
Node* head = buildTree(a,b,n);
print(head);
cout<<"com "<<endl;
}
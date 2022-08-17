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
bool isLeaf(Node *node)
{
    return (node->left== NULL && node->right == NULL);
}
void getLeftBoundary(Node *root,vector<int> *v)
{
    Node* cur = root->left;
    while(cur)
    {
        if(!isLeaf(cur))
        {
            v->push_back(cur->data);
        }
        if(cur->left)
        cur= cur->left;
        else cur= cur->right;
    }
}
void getRightBoundary(Node *root,vector<int> *v)
{
    Node* cur = root->right;
    vector<int> te;
    while(cur)
    {
        if(!isLeaf(cur))
        {
            te.push_back(cur->data);
        }
        if(cur->right)
        cur= cur->right;
        else cur= cur->left;
    }
    for(int i = te.size()-1;i>=0;i--)
    {
        v->push_back(te[i]);
    }
}
void getLeaf(Node* root,vector<int> *v)
{
    if(isLeaf(root))
    {
        v->push_back(root->data);
        return;
    }
    if(root->left) getLeaf(root->left,v);
    if(root->right) getLeaf(root->right,v);
}

vector <int> boundary(Node *root)
    { vector<int> v;
    if(root==NULL)
    {
        return v;
    }
    if (!isLeaf(root))
    v.push_back(root->data);
    //cout<<1;
    getLeftBoundary(root,&v);
    //cout<<1;
    getLeaf(root,&v);
    //cout<<1;
    getRightBoundary(root,&v);
    //cout<<1;

    return v;
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
{
    Node *head = takeinput();
    auto v= boundary(head);
    cout<<"back ";
for (auto ans : v)
{
    cout<<"here "<<ans<<endl;
}


}
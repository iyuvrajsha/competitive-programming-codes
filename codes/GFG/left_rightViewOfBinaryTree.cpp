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
void getleftView(Node *root,vector<Node*> *array,int level)
{
    if (root==NULL)
    {
        return;
    }
    if((*array).size()<=  level)
    {
        (*array).push_back(root);

    }
    getleftView(root->left,array,level+1);
    getleftView(root->right,array,level+1);
}
vector<int> leftView(Node *root)
{
    vector<int> v;
    if (root==NULL)
    {
        return v;
    }          
    vector<Node*> array;
    getleftView(root,&array,0);
    for(auto nodes : array)
    {
        v.push_back(nodes->data);
    }
    return v;
}
    void getRightView(Node *root,vector<Node*> *array,int level)
{
    if (root==NULL)
    {
        return;
    }
    if((*array).size()<=  level)
    {
        (*array).push_back(root);

    }
    getRightView(root->right,array,level+1);
    getRightView(root->left,array,level+1);
}
vector<int> rightView(Node *root)
{
    vector<int> v;
    if (root==NULL)
    {
        return v;
    }          
    vector<Node*> array;
    getRightView(root,&array,0);
    for(auto nodes : array)
    {
        v.push_back(nodes->data);
    }
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
    auto v= leftView(head);
    cout<<"back ";
for (auto ans : v)
{
    cout<<"here "<<ans<<endl;
}
}
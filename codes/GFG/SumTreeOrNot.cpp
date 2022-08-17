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
pair<bool,int> checkSum(Node* root)
{
    if (root==NULL)
    {
        return {1,0};
    }
    auto x= checkSum(root->left);
    auto y= checkSum(root->right);
    if(x.second==0 && y.second==0)
    {
         return {1,root->data};
    }
    if(root->data== x.second+y.second)
    {  
        return {1,x.second+y.second+root->data};
    }
    
        return {0,x.second+y.second};
    
}
bool isSumTree(Node* root)
    {
         // Your code here
         auto x= checkSum(root);
         //cout<<x.second<<endl;;
         return x.first;
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
Node*head= takeinput();
    cout<<isSumTree(head);
}
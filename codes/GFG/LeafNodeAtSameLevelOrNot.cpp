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
void LN(Node* root,unordered_map<int,Node*> *ln,int level)
{
    if(root== NULL)
    {
        return;
    }
    if(root->left== NULL && root->right == NULL)
    {
        ln->insert({level,root});
    }
    LN(root->left, ln,level+1);
    LN(root->right, ln,level+1);


}
bool check(Node *root)
    {
        //Your code here
        unordered_map<int,Node*> ln;
        LN(root,&ln , 0);
        cout<<ln.size()<<endl;
        return ln.size()==1;
        
    }
//3319 7492 9323 -1 3574 2426 4463 -1 5865 2323 6263 -1 5899
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
    cout<<check(head);
}
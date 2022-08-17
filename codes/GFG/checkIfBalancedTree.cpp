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
pair<bool,int> checkBalnceHeight(Node *root)
{
    if(root == NULL)
    {
        return {1,0};
    }
    auto p = checkBalnceHeight(root->left);
    auto p2 = checkBalnceHeight(root->right);
    if (!p.first || !p2.first || abs(p.second- p2.second)>1)
    {
        return {0,1+max(p.second, p2.second)};
    }
    else 
    {
        return {1, 1+max(p.second, p2.second)};
    }

}
bool isBalanced(Node *root)
    {
        auto p = checkBalnceHeight(root);
        return p.first;

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
    /*auto v= zigZagTraversal(head);
    cout<<"back ";
for (auto ans : v)
{
    cout<<"here "<<ans<<endl;
}*/
cout<<isBalanced(head);

}
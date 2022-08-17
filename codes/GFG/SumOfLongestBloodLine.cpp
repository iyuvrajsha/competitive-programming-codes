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
pair<int,int> get_sum(Node* root) //pair<sum,height>
{
    if(root== NULL)
    {
        return {0,0};
    }
    auto a = get_sum(root->left);
    auto b= get_sum(root->right);
    int sum = root->data;
    if(a.second> b.second)
    {
        return {sum+a.first,a.second+1};
    }
    else if (a.second== b.second)
    return {sum+max(b.first,a.first),b.second+1};
    
    else return {sum+b.first,b.second+1};

}
int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        return get_sum(root).first;
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
    cout<<sumOfLongRootToLeafPath(head);
}
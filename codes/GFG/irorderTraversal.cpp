#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

/*1
2
3
4
5
6
7
-1
-1
-1
-1
-1
-1
-1
-1*/
    Node* takeinput()
    {
        Node *head = new Node;
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
            Node *leftC = new Node;
            Node *rightC = new Node;
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
vector<int> inOrder(Node* root) {
     
    }
void print(Node* head)
{
    if (head==NULL)
    return;
    cout<<head->data<<endl;

    print(head->left);
    print(head->right);
}
int main()
{
Node*head = takeinput();
auto v = inOrder(head);
for(auto i :v)
{
    cout<<i<<endl;
}
}
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
void mirror(Node* node) {

    if (node==NULL)
    {
        return ;
    }
    mirror(node->left);
    mirror(node->right);
        Node* temp = new Node(-1);
        temp = node->left;
        node->left = node->right;
        node->right = temp;
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
{
    Node *head = takeinput();
    print(head);
    mirror(head);
    print(head);
}
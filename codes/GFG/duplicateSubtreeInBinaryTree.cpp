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
unordered_map<string,int> m;
string get_dup(Node* root)
{ string s;
    if(root== NULL)
    { s.push_back('$');
        return s;
    }
if(root->left==NULL && root->right==NULL)
    {
     s= to_string(root->data);
        return s;
    }
    s=s + to_string(root->data);
    s= s+ get_dup(root->left);
    s= s+ get_dup(root->right);
    m[s]++;
    return s;
}

int dupSub(Node *root) {
         // code here
         auto s= get_dup(root);
         for(auto i :m)
         {
            if(i.second>1)
            {
                return 1;
            }
         }
return 0;
    
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
    cout<<dupSub(head);
}
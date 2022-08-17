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
vector<Node*> get_tree(Node* root)
{ vector<Node*> v;
        if(root==NULL) return v;

    auto te = get_tree(root->left);
    te.push_back(root);
    auto tee = get_tree(root->right);
    for(auto i:te)
    {
        v.push_back(i);
    }
    for(auto i:tee)
    {
        v.push_back(i);
    }
    return v;
}

Node * bToDLL(Node *root)
    {
        // your code here
        if(root==NULL)
        return root;
    vector<Node* > v;
    v= get_tree(root);
    cout<<" size "<<v.size();
    Node*head = new Node(0);
    head = v[0];
    Node*temp = head;
    temp->left= NULL;
    for(int i =0;i<v.size();i++)
    {   if(i!=v.size()-1)
        {temp->right = v[i+1];
        if(i!=0)
        temp->left = v[i-1];
        }

        else 
        {temp->right= NULL;
        if(i>0)
         temp->left = v[i-1];
         }


        temp= temp->right;
    }
    return head;

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
{  Node *head = takeinput();

    Node *root = bToDLL(head);
 cout<<" back "<<endl;
    Node* temp  =root;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        if(temp->right==NULL)
        break;
temp=temp->right;
    }
    cout<<" ulta "<<endl;
    while(temp!=NULL)
    { cout<<" h "<<endl;
        cout<<temp->data;
        temp=temp->left;
    }
    cout<<"oh"<<endl;
}
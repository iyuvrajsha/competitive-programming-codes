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

void giveDiagonal(Node* root,vector<vector<Node*>> *array,int level)
{
        if (root ==NULL)
        {
            return;
        }
        if((*array).size()>level)
        {
            (*array)[level].push_back(root);
        }
        else 
        {
            vector<Node*> temp;
            temp.push_back(root);
            (*array).push_back(temp);
        }
        giveDiagonal(root->left,array,level+1);
        giveDiagonal(root->right,array,level);
}
vector<int> diagonal(Node *root)
{ vector<int> v;
   vector<vector<Node*>> array;
   giveDiagonal(root,&array,0);
   for(auto i : array)
   {
    for(auto j:i)
    {
        v.push_back(j->data);
    }
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
    auto v= diagonal(head);
    cout<<"back ";
for (auto ans : v)
{
    cout<<"here "<<ans<<endl;
}


}
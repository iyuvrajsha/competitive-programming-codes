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

vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> v;
        if (root== NULL)
        {
            return v;
        }
       queue<pair<Node*, int>> remainingNodes;
       vector<vector<Node*>> ans;
       remainingNodes.push({root,0});
       vector<Node*> temp ;
        temp.push_back(root);
        ans.push_back(temp);
       while(remainingNodes.size()>0)
       {
        auto frontp = remainingNodes.front();
        remainingNodes.pop();
        if(frontp.first->left != NULL)
        {
            remainingNodes.push({frontp.first->left,frontp.second+1 });
            if(ans.size()>frontp.second+1)
            ans[frontp.second+1].push_back(frontp.first->left);
            else
            {  vector<Node*> temp ;
            temp.push_back(frontp.first->left);
                ans.push_back(temp);
            }
        }
        if(frontp.first->right != NULL)
        {
            remainingNodes.push({frontp.first->right,frontp.second+1 });
            if(ans.size()>frontp.second+1)
            ans[frontp.second+1].push_back(frontp.first->right);
            else
            {  vector<Node*> temp ;
            temp.push_back(frontp.first->right);
                ans.push_back(temp);
            }
        }
       }
       for(int i = 0;i<ans.size();i++)
       {
        if(i%2==0)
        {
            for(auto j : ans[i])
            {
                v.push_back(j->data);
            }
        }
        else
        {
            for(int j = ans[i].size() - 1;j>=0;j--)
            {
                v.push_back(ans[i][j]->data);
            }
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
    auto v= zigZagTraversal(head);
    cout<<"back ";
for (auto ans : v)
{
    cout<<"here "<<ans<<endl;
}
}
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

vector<int> bottomView(Node *root)
{
    vector<int> v;
    if (root==NULL)
    {
        return v;
    }          
    unordered_map<int,Node*> array;
    queue<pair<Node*,int>> remainingNodes;
    pair<Node*,int> p;
    p.first = root;
    p.second = 0;
    remainingNodes.push(p);
    array.insert({0,root});
    while(remainingNodes.size()>0)
    {
        auto frontp = remainingNodes.front();
        remainingNodes.pop();
        if ((frontp.first)->left != NULL)
        {
         remainingNodes.push({(frontp.first)->left,frontp.second-1} );
         array[frontp.second-1] = (frontp.first)->left;
         
        }
        if ((frontp.first)->right != NULL)
        {
         remainingNodes.push({(frontp.first)->right,frontp.second+1} );
         array[frontp.second+1] = (frontp.first)->right;
        }
    }

    int min_key= INT_MAX;
    int max_key = INT_MIN;
    for(auto keys : array )
    { //cout<<keys.first<<" -key"<<endl;
         min_key = min(keys.first,min_key);
         max_key = max(keys.first,max_key);
    }

    while(min_key <=max_key)
    {
        v.push_back(array[min_key]->data);
        min_key+=1;
    }
    return v;
}

/*
7 5 8 2 6 N 56 1 3 N N 10 57 N N N 4 9 51 N N N N N N 13 52 12 45 N 55 11 N 20 49 54 N N N 15 44 48 50 53 N 14 18 23 N 46 N N N N N N N 16 19 21 30 N 47 N 17 N N N 22 28 34 N N N N N N 24 29
*/
//trying doing this reccursively but it doesn't works that way coz like it other example wo left se aata hai recurssive calll mei and jb aisa hota hai to neeche wale ko key pehele assign ho jayegi which is an issue
void getTopView(Node *root,unordered_map<int,Node*> *array,int level)
{ //cout<<level<<endl;
    if (root==NULL)
    {
        return;
    }
     auto a = array->insert({level,root});
    if((*(array->find(level))).second !=NULL)
    {
;
    }
    else
    {  //cout<<" in  "<<level<<endl;
            array->insert({level,root});
    }
    getTopView(root->left,array,level-1);
    getTopView(root->right,array,level+1);
}
vector<int> topView(Node *root)
{
    vector<int> v;
    if (root==NULL)
    {
        return v;
    }          
    unordered_map<int,Node*> array;
    queue<pair<Node*,int>> remainingNodes;
    pair<Node*,int> p;
    p.first = root;
    p.second = 0;
    remainingNodes.push(p);
    array.insert({0,root});
    while(remainingNodes.size()>0)
    {
        auto frontp = remainingNodes.front();
        remainingNodes.pop();
        if ((frontp.first)->left != NULL)
        {
         remainingNodes.push({(frontp.first)->left,frontp.second-1} );
         if (array.find(frontp.second-1)== array.end())
        {
            array.insert({frontp.second-1,(frontp.first)->left});
        }
        }
        if ((frontp.first)->right != NULL)
        {
         remainingNodes.push({(frontp.first)->right,frontp.second+1} );
         if (array.find(frontp.second+1)== array.end())
        {
            array.insert({frontp.second+1,(frontp.first)->right});
        }
        }
    }

    int min_key= INT_MAX;
    int max_key = INT_MIN;
    for(auto keys : array )
    { //cout<<keys.first<<" -key"<<endl;
         min_key = min(keys.first,min_key);
         max_key = max(keys.first,max_key);
    }

    while(min_key <=max_key)
    {
        v.push_back(array[min_key]->data);
        min_key+=1;
    }
    return v;
}
    void getRightView(Node *root,vector<Node*> *array,int level)
{
    if (root==NULL)
    {
        return;
    }
    if((*array).size()<=  level)
    {
        (*array).push_back(root);

    }
    getRightView(root->right,array,level+1);
    getRightView(root->left,array,level+1);
}
vector<int> rightView(Node *root)
{
    vector<int> v;
    if (root==NULL)
    {
        return v;
    }          
    vector<Node*> array;
    getRightView(root,&array,0);
    for(auto nodes : array)
    {
        v.push_back(nodes->data);
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
    auto v= bottomView(head);
    cout<<"back ";
for (auto ans : v)
{
    cout<<"here "<<ans<<endl;
}
}
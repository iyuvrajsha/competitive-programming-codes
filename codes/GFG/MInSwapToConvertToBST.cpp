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
void print(Node* head)
{
    if (head==NULL)
    return;
    cout<<head->data<<endl;

    print(head->left);
    print(head->right);
}
int minswaps(vector<int> v)
{   vector<pair<int,int>> p;
    for(int i=0;i<v.size();i++)
    {
        p.push_back({v[i],i});
    }
    sort(p.begin(),p.end());
    int swa= 0;
    for(int i=0;i<v.size();i++)
    {
        if(p[i].second== i)
        {
            continue;
        }
        else
        {
            swap(p[i],p[p[i].second]);
            swa+=1;
            i--;
        }
    }
    return swa;
}
void getInorder(Node* root,vector<int> *v)
{
    if(root==NULL)
    {
        return ;
    }
   getInorder(root->left,v);
    v->push_back(root->data);
   getInorder(root->right,v);
}
int minSwaps(vector<int>&A, int n){
        //Write your code here
        if(A.begin()==A.end())
        {
            return 0;
        }
        auto it = A.begin();
        queue<Node*> remainingNodes;
        Node* root = new Node(*it);
        remainingNodes.push(root);
        it+=1;
        
        while(remainingNodes.size()>0)
        {//cout<<" a"<<endl;
            auto frontn = remainingNodes.front();
            remainingNodes.pop();
            //cout<<frontn->data<<endl;
            if(it<A.end())
            { Node* temp ;
            temp= new Node(*it);
                frontn->left=temp;
                it+=1;
                remainingNodes.push(temp);
                if(it<A.end()){
                temp = new Node(*it);
                frontn->right = temp;
                it+=1;
                remainingNodes.push(temp);}
            }
        }
        vector<int> inO ; getInorder(root,&inO);
        return minswaps(inO);

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
int n;
cin>>n;
vector<int> a;
for(int i =0;i<n;i++)
{
    int x;
    cin>>x;
    a.push_back(x);
}
    cout<<minSwaps(a,n)<< 'a';
}
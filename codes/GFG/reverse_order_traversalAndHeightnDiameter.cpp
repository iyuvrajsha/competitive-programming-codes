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
void print(Node* head)
{
    if (head==NULL)
    return;
    cout<<head->data<<endl;

    print(head->left);
    print(head->right);
}

int height(struct Node* node)
{
    if (node ==NULL)
        return 0;

    auto a= height(node->left);
    auto b= height(node->right);

    int ans = max(a,b);
    return ans+1;
    
}


pair<int,int> dheight(struct Node* node)
{
    if (node ==NULL){
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    auto p2 = dheight(node->left);
    auto p1 = dheight(node->right);
    pair<int,int> p ;
    p.first  =1 +max(p1.first,p2.first);
    p.second = max(p1.first+p2.first+1, max(p1.second,p2.second));
    return p;
}

    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
    
if (root ==NULL)
        return 0;
    auto p = dheight(root);
    return p.second;
    }

vector<int> reverseLevelOrder(Node *root)
{
 vector<Node*> q;
 vector<int> v;
 if (root==NULL)
     return v;
 
 q.push_back(root);
 
 auto point = q.begin();
 cout<<(*point)->data<<endl;
 while(point!= q.end())
 {  cout<<'a'<<endl;
    Node *p = new Node;
    p = (*point);
    cout<<"aa"<<endl;
    if (p !=NULL)
    cout<<'y'<<endl;
    
    //cout<<p->data<<endl; 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
    if (p->right!=NULL){
        cout<<"a2"<<endl;
        Node *ri = p->right;
    q.push_back(ri);
    cout<<p->right->data<<endl;
    }
    cout<<'b'<<endl;
    if (p->left!=NULL){
        Node* le = p->left;
    q.push_back(le);
    cout<<p->left->data<<endl;;
    }
    cout<<'c'<<endl;
    point+=1;
    cout<<q.size()<<endl;;

 }
 //cout<<q.size();
 point =q.end()-1;
 while(point>=q.begin())
 { auto p = *point;
    v.push_back(p->data);
 }
 return v;
}

int main()
{
Node *head = takeinput();
//print(head);
//vector<int> v = reverseLevelOrder(head);
cout<<height(head)<<endl;
cout<<diameter(head)<<endl;
}
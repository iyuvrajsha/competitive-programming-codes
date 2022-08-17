#include<bits/stdc++.h>
using namespace std;
template <typename t>
class treenode
{public:
    t data;
vector<treenode*> children; 

treenode(t data)
{
this->data = data;
}
};

void print_lw(treenode<int>* root)
{
    if (root== NULL)
    {
        return ; 
    }
    treenode<int>* troot = root;

    queue<treenode<int>*> remainingNodes;
    remainingNodes.push(troot);
    cout<<"printing tree lw"<<endl;
    cout<<troot->data<<endl;
    while(!remainingNodes.empty())
    {   treenode<int> *ttroot = remainingNodes.front();
        remainingNodes.pop(); 
        //cout<<"printing tree lw";
        int soc = ttroot->children.size();
        
        for(auto i  : ttroot->children)
        {   remainingNodes.push(i);
            cout<<i->data<<endl;
        }
    }


}

void print(treenode<int>* root )
{
    cout<<root->data<<endl;
    for(auto i : root->children)
    {
        print(i);
    }
}
treenode<int> * get_data()
{
    treenode<int> *root  ;
    cout<<"Enter the root node"<<endl;
    int aa;
    cin>>aa;
    queue<treenode<int>*> remainingNodes;
    root= new treenode<int>(aa);
    remainingNodes.push(root);
    while(!remainingNodes.empty())
    {
        auto *f = remainingNodes.front();
        remainingNodes.pop();
        cout<<"how many childs of "<<f->data<<endl ;
        
        int noc;
        cin>>noc;
        for(int i = 0;i<noc;i++)
        {   treenode<int> *child;
            cout<<"enter "<<i<<" th child of"<<f->data<<endl;
            int x;
            cin>>x;
            child = new treenode<int>(x);
            remainingNodes.push(child);
            f->children.push_back(child);
        }
    }
return root;

}

int main()
{ treenode<int>* root = get_data();
print(root);
cout<<endl;
print_lw(root);
vector<int> v;
rever
}
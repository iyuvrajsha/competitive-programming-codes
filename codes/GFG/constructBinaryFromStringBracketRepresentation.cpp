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
Node *treeFromString(string str)
    {   cout<<1;
        Node *root = NULL;
        if(str.empty())
        {
            return root;
        }
        int val = 0,i=0;
        for(i = 0;i<str.size();i++)
        {   if(str[i]=='(')
            break;
            val= val*10 + int(str[0] - '0');
        }
        root = new Node(val);
        string s=""; int j= i+1;
        for(;j<str.size();j++)
        {
            s.push_back(str[j]);
        }
        root = treeFromString(s);
        if(i<str.size())
        {
            if(str[i+1]==')' )
            { i+=1; val=0;
                for(;i<str.size();i++)
                {
                    val = val*10 +int(str[i]-'0');
                }
                root->right = new Node(val);
            }
            else
            {
                i+=1; val=0;
                for(;i<str.size();i++)
                {  if(str[i]== ')')
                    break;
                    val = val*10 +int(str[i]-'0');
                }
                root->left = new Node(val);
                if(str[i+1]=='(' &&str[i+2]!=')' )
            {   i+=1; val=0;
                for(;i<str.size();i++)
                {
                    val = val*10 +int(str[i]-'0');
                }
                root->right = new Node(val);
            }
            }
        }
     return root;

        
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
    Node *root = treeFromString("4(2(5)(6))(3(2)(1))");
    print(root);
}
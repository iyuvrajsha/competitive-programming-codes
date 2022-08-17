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
void removeZeros(Node* head)
{
    if (head==NULL)
    return;
if(head->data == 0)
{ cout<<1<<" b "<<endl;
    head=NULL;
    return ;
}
removeZeros(head->left);
removeZeros(head->right);
}
Node *treeFromString(string str)
    {   //cout<<1;
        Node *root = NULL;
        if(str.empty())
        {
            return root;
        }
        int val = 0,i=0;
        for(i = 0;i<str.size();i++)
        {   if(str[i]=='(')
            break;
            val= val*10 + int(str[i] - '0');
        }
        root = new Node(val);
        stack<Node*> curNode;
        curNode.push(root);
        stack<char> bracket;
        bool left=false,right=false,readVal=false;
        val= 0;
        for(;i<str.size();i++)
        {
            if(str[i]== '(')
            {
                bracket.push(str[i]);
                if(readVal)
                {
                    Node* node = new Node(val);
                    if(!curNode.top()->left) 
                {
                     curNode.top()->left = node;                    
                }
                else
                {
                    curNode.top()->right =node;
                }
                    curNode.push(node);

                }
                readVal =true;
                val = 0;
            }
            else if(readVal && str[i]!=')')
            {
                val = (val*10) +int(str[i]-'0');
            }
            else if(str[i]==')')
            {
                if(readVal)
                   { Node *node = new Node(val);
                    if(!curNode.top()->left) 
                    {curNode.top()->left = node;                    
                    }
                    else
                    {
                        curNode.top()->right =node;
                    }
                    //curNode.push(node);
                    val = 0;
                    readVal=false;
                   }
                else
                    curNode.pop();
            }
        }
    removeZeros(root);
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
    Node *root = treeFromString("12()(3)");

    print(root);
}
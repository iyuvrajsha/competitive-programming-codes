#include<bits/stdc++.h>
using namespace std;
struct ListNode 
{
    int val;
    ListNode* next;
};

vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int i=0,j=0,a[m][n]={-1},x=n,y=m,p=0,q=0;
        vector<vector<int>> ans;
        bool goUp=false,goLeft=false,goDown=false,goRight=true;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            a[i][j]=temp->val;
            if(i==x-1)
            {
                goDown=true;
                x--;
                goUp=false;goLeft=false;goRight=true;
            }
            else if(j==y-1)
            {
                goLeft=true;
                y--;
                goUp=false;goDown=false;goRight=true;
            }
            else if(i == p+1)
            {
                goRight=true;
                p++;
                goUp=false;goLeft=false;goDown=false;
            }
            else if(j==q)
            {
                goUp=true;
                q++;
                goLeft=false;goDown=false;goRight=true;
            }
            if (goRight)
            {
                j+=1;
            }
            else if(goLeft)
            {
                j-=1;
            }
            else if(goUp)
            {
                i-=1;
            }
            else if(goDown)
            {
                i+=1;
            }
        }
        for(int i = 0;i<m;i++)
        { vector<int> tem;
            for(int j= 0;j<n;j++)
            {
                tem.push_back(a[i][j]);
        }
        ans.push_back(tem);
        }
        return ans;
    }


int main()
{

}
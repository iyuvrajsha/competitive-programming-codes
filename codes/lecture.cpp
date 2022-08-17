#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    unordered_map<string ,string> ma;
    for(int i= 0; i<m;i++)
    {
        string x,y;
         cin>>x>>y;
         ma[x]= y;
    } string ans[n];
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        if(ma[x].size() < x.size())
        {
            ans[i]= ma[x];
        }
        else 
        {
            ans[i]= x;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
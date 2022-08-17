#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; int an=0;
        cin>>n; int a[n][n]; set<int> s;
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        { int x;
            cin>>x;
            s.insert(x);

        } }
        
        for(auto v:s)
        {
            an=an^v;
        }
        cout<<an<<endl;
    }

}
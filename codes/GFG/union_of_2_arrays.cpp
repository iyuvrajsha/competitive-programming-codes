#include<bits/stdc++.h>
using namespace std;

 int doUnion(int a[], int n, int b[], int m)  {
    set<int> s; int c=0;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    for(auto ss :s)
    c++;
    return c;

    }

int main()
    { int n,m;
    cin>>n>>m; int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<doUnion(a,n,b,m);
    }

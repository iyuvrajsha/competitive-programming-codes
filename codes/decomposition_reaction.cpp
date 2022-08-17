#include<bits/stdc++.h>
using namespace std;
long long M= 1e9 +7;
int main()
{
    int n,m;
    cin>>n>>m;
    long long q[n+1];
    for(int i= 1;i<n+1;i++)
    {
        cin>>q[i];
    }
    for(int i= 0;i<m;i++)
    {
        int c0,x;
        cin>>c0>>x;
        int w[x],c[x]; long long tb= 0;
        for(int i = 0; i<x; i++)
        { long long pl;
            cin>>w[i];
            cin>>c[i];
           tb=  (w[i] * q[c0]) %M;
           q[c[i]] = ((q[c[i]]%M) + (tb )%M)%M; 
        }
        q[c0]=0;
        
    }
    for(int i=1; i<n+1;i++)
    {
        cout<<q[i]<<endl;
    }
    

}
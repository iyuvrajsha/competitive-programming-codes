#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    long long n,m,l;
    cin>>n>>m>>l;
    long long ans,i=(l+(n-1));
    //cout<<" i "<<i<<endl;
    if(n==0)
    {cout<<m<<endl;
    continue;}
    ans= m % i;
    if(ans>=l)
    ans=0;    
    cout<<ans<<endl;
}
}
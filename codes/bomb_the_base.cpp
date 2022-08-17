#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        long long d=0;
        long long a[n];
        for(int i= 0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<x)
            d= i+1;
        }
        cout<<d<<endl;
    }
}
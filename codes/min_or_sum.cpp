#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n,r=0;
                cin>>n;int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            r= r | a[i];
        }
       cout<<r<<endl; 
    }
}
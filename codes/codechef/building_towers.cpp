#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,m,o;
        cin>>x>>m; 
        long long mh= pow(2,m-1);
        
        o=mh/x;
        cout<<o<<endl;

    }
}
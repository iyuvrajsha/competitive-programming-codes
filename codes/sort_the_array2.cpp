#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long minn= INT_MAX,maxx=INT_MIN,l=1,r=1; bool used=false,inuse= false,ans=true;;
    if(ans)
    {
        cout<<"yes"<<endl;
        cout<<l<<" "<<r<<endl;
    }
    else cout<<"no"<<endl;
}
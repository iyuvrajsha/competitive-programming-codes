#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;int a[n];
    int nt,ans; int mnt=0;
    for(int i= 0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%m==0)
        {
            nt= a[i]/m;
            if(nt==0)
            nt= 1;
        }
        else
        nt= (a[i]/m) +1;
    if(nt>= mnt)
{
    mnt= nt;
    ans= i+1;
}
    }
    cout<<ans<<endl;
}
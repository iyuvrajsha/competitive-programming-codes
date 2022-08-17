#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+1]; int ans=0;
    int ac[m+1];
    for(int i=0;i<m+1;i++ )
    {
        cin>>a[i];
        ac[i]= a[i];
    }
    for(int j=0;j<m;j++)
    { int xo= a[m]^a[j]; int db=0;
    for(int i = 0;i<n;i++)
    {   if(xo & 1 == 1)
    {
        db++;
    }
       xo= xo>>1;
    }
    if(db<= k)
    {
        ans++;
    }
    }
    cout<<ans<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n];
        long long b[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+(n-1));
        long long ans;
        if(n>2)
       { 
           
    }
    else 
    { if(b[0]-a[1] < b[0]- a[0] && b[0]-a[1]>0 )
       ans = b[0]-a[1];
    else
        ans=b[0]-a[0];
    }
    cout<<ans<<endl;

    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        long long x;
        cin>>n>>x;
        long long a[n]; long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        long long ans;
        sort(a,a+n);
        if(x<= a[0])
        {
            ans= n;
        }
        else 
        { long long xa= x/a[0];
        if(x%a[0] != 0)
        xa++;
            
            ans= max(xa,n);


        }
        cout<<ans<<endl;;
}
}

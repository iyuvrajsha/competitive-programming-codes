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
        if(n%2 !=0)
        {
            cout<<0<<endl;
            continue;
        }
        int n1=n/2; long long ans=1;
        for(int i=n1;i>0;i--)
        {
            ans = (((ans)%998244353) * ((i)%998244353))% 998244353;
            //cout<<"ans "<<ans<<endl;;
        } ans= (((ans)%998244353 ) * ((ans)%998244353))%998244353;
        cout<<ans<<endl;
    }
}
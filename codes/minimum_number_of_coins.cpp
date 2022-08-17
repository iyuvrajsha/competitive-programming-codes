#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x; int ans;
        if(x%5 == 0)
        { 
                ans= x/5;
                if(ans>1)
                {   if(ans%2==0)
                    ans= ans/2;
                    else ans= (ans/2)+1;
                }

        }
        else ans=-1;
        cout<<ans<<endl;
    }
}
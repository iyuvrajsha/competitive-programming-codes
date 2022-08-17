#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        int l; string ans;
        if(k== 0)
        {
            l=4;
            if(n%4 < 4 && n%4!= 0)
            
            {
                ans= "On";
            }
            else ans= "Off";
        }
        else if(k==1 )
        {
            int l1= 1+ (n%4),l2= 2+ (n%4),l3= 3+(n%4);
            if(l1<4 && l2 <4 && l3<4)
            {
                ans= "On";
            }
            else ans= "Ambiguous";
        }
        cout<<ans<<endl;
    }
}
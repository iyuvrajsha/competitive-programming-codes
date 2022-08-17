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
        string s; int ans=0;
        cin>>s; int c00=0, c010=0;
        for(int i=0;i<n;i++)
        {   if(i<n-1)
            if(s[i]=='0' && s[i+1]=='0')
            {
                ans+=2;
            }
            if(i<n-2)
            if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
            ans++;
        }
        cout<<ans<<endl;
    }
}
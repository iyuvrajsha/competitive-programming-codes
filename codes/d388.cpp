#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int a[r-l+1]; bool f=false; unordered_map<int,int> m;
        for(int i=0;i<r-l+1;i++)
        {
            cin>>a[i];
            m[a[i]]++;
            if(a[i]==0)
            f=true;
        } int ans=0;
        if(f)
        {
            for(int i=r;i>=0;i--)
            { bool flag=true;
                for(int j=0;i<=r;j++)
                {
                    if(m[j^i]<1)
                    {  flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    ans=i;
                    break;
                }
            }
            cout<<ans<<endl;
            continue;
        }
        int ma= *max_element(a,a+(r-l+1));
            for(int i=r+2;i<ma;i--)
            { bool flag=true;
                for(int j=0;i<=r;j++)
                {
                    if(m[j^i]<1)
                    {  flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    ans=i;
                    break;
                }
            }
                 cout<<ans<<endl;
            

    }
}
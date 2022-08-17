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
        unordered_map<long long,int> studs;
        long long macs= INT_MIN;
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
            studs[a[i]]++;
            if(a[i]>macs)
            {
                macs =a[i];
            }
        }
        //cout<<macs<<" mac "<<endl;
        long long ans=0; bool f= false; int maxk= INT_MIN;
        for(auto i:studs)
        { maxk = max(maxk,i.second);
            if(i.second<2) { 
            if(i.first ==macs)
                f=true;
            ans++;
             }  
            }
if(f && ans==1 && maxk==2)
        {
            cout<<2<<endl;
            continue;
        }
        if(ans %2 !=0)
        {
            ans = (ans/2)+1; 
        }
        else
        {
            ans = ans/2;
        }
        cout<<ans<<endl;

    }
}
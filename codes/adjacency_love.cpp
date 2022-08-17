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
        int ce=0,co=0;
        vector<long long > e,o;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                ce++;
                e.push_back(a[i]);
            }
            else 
            {
                co++;
                o.push_back(a[i]);
            }
        }
        if(co==n || co==1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(co%2== 0)
        {
            for(auto it=o.begin();it<o.end();it++)
            {
                cout<<*it<<" ";
            }
            for(auto it=e.begin();it<e.end();it++)
            {
                cout<<*it<<" ";
            }
            cout<<endl;
        }
        else{
            auto ito=o.begin();
            cout<<*ito<<" ";
            ito++;
            for(auto it=e.begin();it<e.end();it++)
            {
                cout<<*it<<" ";
            }
            for(;ito<o.end();ito++)
            {
                cout<<*ito<<" ";
            }
            cout<<endl;
        }
    }
}
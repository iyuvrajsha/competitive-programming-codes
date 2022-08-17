#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k; string s;
        cin>>n>>k>>s; 
        if(k>n)
        {
            cout<<"no"<<" here "<<endl;
            continue;
        }
        bool fl=false;
        unordered_map<int,int> con1;
        int co1=0;
        for(int i=0;i<n;i++)
        {   if(i<n-1)
            if(s[i]=='1' && s[i+1]=='1')
            {
                co1++;
                continue;
            }
            if (s[i]=='1' && co1==0)
            {
                con1[1]++;
                fl=true;
            }
            else 
            {
                if(co1!=0)
                {
                    con1[co1+1]++;
                    if(co1%2!=0)
                    fl=true;
                    co1=0;
                }
            }
        }
        if(co1!=0)
        {
            con1[co1+1]++;
                    if(co1%2!=0)
                    fl=true;
                    co1=0;
        }
        auto ma= *max_element(con1.begin(),con1.end());
        int maxx= ma.first;
        if (fl)
        {
            if(maxx==k)
            cout<<"yes1"<<endl;
            else cout<<"no"<<" here2 "<<endl;
        }
        else
        {
            if(k<=maxx)
            cout<<"yes2"<<endl;
            else cout<<"no"<<" here3 "<<endl;
        }

    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;  int a[2*n],hsh[n]={0};
    
        for(int i=0;i<(2*n);i++)
        {
            cin>>a[i];
        hsh[a[i]]++;

        } int ma,mx=0; bool flag= false;
        for(int i=0;i<n;i++)
        {
            if(hsh[i]==0)
            {
                ma=i;
                flag=true;
                break;
            }
            if(i>mx && hsh[i]>0)
            {
                mx=i;
            }
        }
        if(!flag)
        {
            ma=mx+1;
        } 
       // cout<<" ma "<<ma<<endl;
        if(ma==0)
        {
            cout<<"yes"<<endl;
            continue;
        }
        int g=0; bool f= false;
        for(int i=0;i<(n*2);i++)
        {  //cout<<" a[i] "<<a[i]<<" hsh[a i ] "<<hsh[a[i]]<<endl;
            if(a[i]<ma  && hsh[a[i]]<=1)
            {
                f=true;
                break;
            }
        }
        if(!f)
        {
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
    return 0;
}
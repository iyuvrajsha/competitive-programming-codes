#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k; cin>>t;
    while(t--)
    { cin>>n>>k;
     int a[n],b[n]; bool flag[n] ={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int ii=0;ii<n;ii++)
        { 
            if(!flag[ii])
        {
            if(a[ii]<=k)
            {
                k+=b[ii];
                flag[ii]=true;
                ii=-1;
            }
        }
        } cout<<k<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long minn= INT_MAX,maxx=INT_MIN,l=1,r=1; bool used=false,inuse= false,ans=true;;
    for (int i = 0; i < n-1; i++)
    { 
        if(a[i]>a[i+1] && !used )
        {
            l = i+1;
           r = i+2;
            inuse=true;
            used=true;
            maxx= a[i];
        }
        else if(a[i]>=a[i+1] && inuse)
        {
            r = i+1+1;
            maxx=a[i];
        }
        else if(a[i]<a[i+1] && inuse)
        {   r=i+1;
            used=true;
            inuse=false;
            if(a[i+1]<maxx)
            {
                ans= false;
        break; 
            }          
        }
        else if(a[i]>a[i+1] && used)
        {ans= false;
        break;           
        }
     } minn= a[r-1];maxx=a[l-1];
        if(ans)
        {
            
        for(int i=0;i<l-1;i++)
        {
            if(a[i]<maxx && a[i]>minn)
            {
                ans=false;
            }
        } minn= a[r-1];maxx=a[l-1];
        for(int i=r;i<n;i++)
        {
            if(a[i]<maxx && a[i]>minn)
            {
                ans=false;
            }
        }
        }
    
    if(ans)
    {
        cout<<"yes"<<endl;
        cout<<l<<" "<<r<<endl;
    }
    else cout<<"no"<<endl;
}
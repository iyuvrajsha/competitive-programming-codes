#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    double a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    double d=0;
    for(int i=0;i<n-1;i++)
    {
        if((a[i+1]- a[i])/2 > d)
        {
            d= (a[i+1]-a[i])/2;
           // cout<<"ai "<<a[i]<<" a i+1 "<<a[i+1]<<" d "<<d<<endl; 
        }
    }
    if(a[0]!=0)
    {
        if(d< (a[0]))
        {
            d= a[0];
            //cout<<"aha"<<endl;
        }
    }
    if(a[n-1]!= l)
    {
        if(d< (l-a[n-1]))
        {
            d= (l - a[n-1]);
           // cout<<"ahah"<<endl;
        }
    }
    cout<<fixed<<setprecision(10)<<d;
}
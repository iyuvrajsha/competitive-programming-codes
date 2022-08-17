#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; long long a[n]; int ct=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n-1;i++)
        {
            if(a[i] > a[i-1] && a[i]> a[i+1])
            {   if(i!=n-2)
                a[i+1]= max(a[i], a[i+2]);
                else {
                  a[i+1]= a[i];  
                }
                ct++;
            }
        }
        cout<<ct<<endl;
        for(auto h: a)
        {
            cout<<h<<" ";
        } cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
{   int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {    cin>>a[i];    }
    if(a[n-2] > a[n-1])
    {
        cout<<-1<<endl;
        continue;
    }
    int gp=0; int gn= 0,ct=0;
    gp= a[n-1];
    gn= a[n-2];
    int y= n-2,z=n-1;
    vector<vector<int>> v;
    for(int i= n-3; i>=0; i--)
    {
        if(a[i]>a[i+1])
        {
            a[i]= gn- gp;
            ct++;
            vector<int> t;
            t.push_back(i);
            t.push_back(y);
            t.push_back(z);
            v.push_back(t);
        }
        if(a[i]<=gn )
        { gp = gn;
            gn=a[i];

            z=y;
            y= i;
        }
            }
cout<<ct<<endl;
for(int i=ct-1;i>=0;i--)
{
    for(auto aa : v[i])
{
cout<<aa+1<<" ";
} cout<<endl;
}
    
   }   return 0; 
    }
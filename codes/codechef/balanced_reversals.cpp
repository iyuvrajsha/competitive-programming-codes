#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;string a;
        cin>>n>>a;int c0=0,c1=0;
     vector<int> v;
     for(int i=0;i<n;i++)
     {
         if(a[i]=='1')
         {
            c1++;
         }
         else if(a[i]== '0')
         {
            c0++;
         }         
     }
     for(int i=0;i<c0;i++)
     {
         cout<<0;
     }
     for(int i=0;i<c1;i++)
     {
         cout<<1;
     } cout<<endl;
    }
}
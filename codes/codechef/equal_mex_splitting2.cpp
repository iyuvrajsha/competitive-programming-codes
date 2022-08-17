#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0=0,co=0;
        cin>>n;
        int a[n];
        int hsh[100010]= {0}, ma= 0;
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
            if(a[i]== 0)
            {
                c0++;
            }
            else
            co++;
            
        }
        
        
        cout<<max(c0,co)<<endl;

    }
}
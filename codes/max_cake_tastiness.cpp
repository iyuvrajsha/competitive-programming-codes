#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; long long ma=INT_MIN,mb=INT_MIN;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            if(x>ma )
            {   mb= ma;
                ma= x;
            }
            else if(x>=mb)
            {
                mb= x;
            }
        }
        cout<<ma+mb<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n],mi=0 , ma=0,mii=0,mai=0; 
      
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>ma)
            {
                ma=a[i];
                mai=i;
            }
            else if(a[i]<=mi)
            {
                mi=a[i];
                mii=i;
            }
        }
       if(a[0] > a[n-1] || (mii>mai && ((mi!= a[0])&& (ma!=a[n-1])) ))
       {
           cout<<"YES"<<endl;
       }
       else
       cout<<"NO"<<endl;
    }
}

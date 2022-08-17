#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        bool flag[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int ma= INT_MIN;
        sort(a,a+n);
        long long sr= 0,sb= 0;
        for(int i= (n/2)+1;i<n;i++)
        {
            sr+=  a[i];;
        }
        for(int i= 0;i<=n/2;i++)
        {
            sb+=  a[i];
        }
        if(sb>= sr)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
        
    }
}
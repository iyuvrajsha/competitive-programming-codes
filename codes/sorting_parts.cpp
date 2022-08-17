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
        long long a[n];
      
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        long long mi,ma;
        mi= *min_element(a,a+n);
        ma= *max_element(a,a+n);
        if(n==1 || mi == ma)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(mi != a[0] && ma != a[n-1])
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; long long e=0,o=0;
        cin>>n; long long a[2*n];
        for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
        if(abs(a[i])%2 ==0)
        e++;
        else
        o++;
    }
    if(e%2==0 && o %2 ==0 )
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    }
}
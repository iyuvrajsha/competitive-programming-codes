#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k; int tk=k;
        int i=1; int a[n+1];
        if(n-k<=1)
        {
            cout<<-1<<endl;
            continue;

        }
        while(k--)
        {
            a[i]=i;
            i++;
        }
        while(i<=n)
        {   if(i!=n)
            a[i]= i+1;
            else
            a[i]= tk+1;

            i++;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }cout<<endl;
    }
}
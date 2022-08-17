#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,y,b;
        cin>>n>>b>>x>>y;
        long long sm=0; long long p=0;
        for(int i=1;i<=n;i++)
        {
            if(p+x>b)
            {
                p=p-y;
                sm+=p;
                //cout<<"p1 "<<p<<endl;
            }
            else 
            {
                p= p+x;
                sm+=p;//cout<<"p2 "<<p<<endl;
            }
        }
        cout<<sm<<endl;
    }
}
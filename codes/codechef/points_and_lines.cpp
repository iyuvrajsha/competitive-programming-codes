#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
    while(t--)
{  unordered_map<long long,long long> x,y;
    int n; long long p=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        x[a]++;
        y[b]++;
        if(x[a]==1)
        {
            p++;
        }
        if(y[b]==1)
        {
            p++;
        }

    }
    
   cout<<p<<endl;
   
}

    return 0;
}
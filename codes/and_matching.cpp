#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ int n,k;
    cin>>n>>k; int np=0;
    for(int i=0;i<n/2;i++)
    {
        if((i & n-1-k-i)==k )
        {
            cout<<i<<" "<<n-1-k-i<<endl;
            np++;
        }
    }
    if(np!=n/2)
    {
        cout<<-1<<endl;
    }
}

    return 0;
}
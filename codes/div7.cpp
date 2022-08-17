#include<bits/stdc++.h>
using namespace std;

int main()
{ int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int re=n%7;
    int n1= n-re,n2=n+ (7-re);
    if((n1/10)*10 == (n/10)*10)
    {
        cout<<n1<<endl;
    }
    else
    cout<<n2<<endl;
}

    return 0;
}
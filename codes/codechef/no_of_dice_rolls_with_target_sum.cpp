#include<bits/stdc++.h>
using namespace std;
long long M= 1e9+7;
int main()
{ long long p =1;
    for(int i=30,j=1 ;j<17;j++)
    {
        p= ((p%M) * (i%M))%M;
    }
    for(int i=30,j=1 ;j<14;j++,i--)
    {
        p= ((p%M) * (i%M))%M;
    }

    cout<<p<<endl;
}


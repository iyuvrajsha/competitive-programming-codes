#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        int ar[3];
        ar[0]= a;
        ar[1]= b;
        ar[2]= c;
        sort(ar,ar+3);
        int p= ((x-1) * ar[0])+ ar[1];
        cout<<p<<endl;
    }
}
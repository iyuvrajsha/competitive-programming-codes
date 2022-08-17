#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int tc;
        tc= (n/3)*2*x + (n%3)*x;
        cout<<tc<<endl;
    }

}
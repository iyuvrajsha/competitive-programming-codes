#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sx=0,sy=0,sz=0;
    for(int i=0;i<n;i++)
    { int x,y,z;
        cin>>x>>y>>z;
        sx+=x;sy+=y;sz+=z;
    } 
    if(sx==sy && sy==sz && sz == 0)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;

}
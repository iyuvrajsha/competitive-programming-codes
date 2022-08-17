#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n; int s=0;
while(n--)
{
    int x,y,z;
cin>>x>>y>>z;
if(x+y+z>1)
{
    s++;
}
}
cout<<s;

    return 0;
}
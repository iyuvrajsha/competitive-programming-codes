#include<bits/stdc++.h>
using namespace std;
int main()
{ int n; int cu=0,ca=0;
cin>>n; 
for(int i=0;i<n;i++)
{
    int x,y;
    cin>>x>>y;
    cu= (cu-x)+y;
   if(cu>ca)
   ca=cu;
}
cout<<ca;
    return 0;
}
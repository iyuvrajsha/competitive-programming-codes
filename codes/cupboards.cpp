#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
cin>>n;  int l[n],r[n],l_1=0,r_1=0,l_0=0,r_0=0,time=0;
for(int i=0;i<n;i++)
{
    cin>>l[i]>>r[i];
    if(l[i]==1)
    l_1++;
    else
    l_0++;

    if(r[i]==1)
    r_1++;
    else r_0++;
}
if(l_1>r_1 && (l_0<r_0 || l_0)== r_0)
{
   time=time+ (n-l_1)+ (n-r_0);
}
else if(l_1<=r_1)
{
    time= time+ (n-r_1)+ (n-l_0);

}

cout<<min(l_1,n-l_1)+min(r_1,n-r_1);
    return 0;
}
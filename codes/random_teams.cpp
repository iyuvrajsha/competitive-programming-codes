#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m; cin>>n>>m;
    long long mp= n-m +1,mip;
    long long mt=0,mit=0; long long ml= n%m;
    mt= (mp*mp) -(((mp)*(mp+1))/2);
    if(n%m!=0)
    {
        mip= (n/m) + 1;
    }
    else mip= n/m;
      mit= (mip*mip) -(((mip)*(mip+1))/2);
    if(ml==0) ml= m;
    //cout<<" ml "<<ml<<endl;
    long long ex= (mip-1) ,ext=(ex*ex) -(((ex)*(ex+1))/2) ;
    
     cout<<((mit)* ml) + ext*(m-ml)<<" "<<mt;

}
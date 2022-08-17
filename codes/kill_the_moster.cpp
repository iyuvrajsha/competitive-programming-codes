#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int hc,hc1,dc1,dc,hm,hm1,dm1,dm,k,w,a;  bool flag= false;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    if(dc==0)
    {cout<<"NO"<<endl;
    continue;
    }
    else if(dm==0)
    {
        cout<<"YES"<<endl;
        continue;
    }
int atc,atm;
if(k==0)
{


if(hm%dc==0)
atc= hm/dc;
else
atc= (hm/dc)+1;
if(hc%dm==0)
atm= hc/dm;
else
atm= (hc/dm)+1;
if(atc<=atm)
{
    flag=true;

}
}
for(int i=0;i<=k;i++)
{
    dc1=(i*w)+dc;
    hc1=hc+(a*(k-i));
    if(hm%dc1==0)
atc= hm/dc1;
else
atc= (hm/dc1)+1;
if(hc1%dm==0)
atm= hc1/dm;
else
atm= (hc1/dm)+1;

if(atc<=atm)
{
    flag=true;
    break;
}
}
if(flag)
{
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;

}

    return 0;
}
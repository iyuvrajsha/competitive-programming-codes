#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;
int totalvotes=p+q+r, got=a+b+c;
    int ma=p-a;
    if(ma<=q-b && q-b >= r-c)
    {
        b=q;
        got=a+b+c;
    }
    else if(ma>=q-b && ma >= r-c)
    {
        a=p;
        got=a+b+c;
    }
    else if(r-c>=q-b && ma <= r-c)
    {
        c=r;
        got=a+b+c;
    }
    if((totalvotes/2 < got ) || totalvotes==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

    return 0;
}
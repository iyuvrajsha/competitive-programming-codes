#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)

{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long mo=0,me=0; bool e= false,o=false,flag=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2== 0 && a[i]>me)
        {
            me=a[i];
            e=true;
        }
        else if(a[i]%2 != 0 && a[i]>mo)
        {
            mo= a[i];
            o=true;
        }
        if(a[i]%2 !=0 && a[i]<mo)
        {
            flag= false;
            break;
        }
        else if(a[i]%2 ==0 && a[i]<me)
        {
            flag= false;
            break;
        }
        //cout<<" me "<<me<<" mo "<<mo<<" ai "<<a[i]<<endl;
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}
    return 0;
}
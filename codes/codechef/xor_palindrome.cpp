#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ int n; string s;
cin>>n>>s;
int c0=0,c1=0;
for(int i=0;i<n;i++)
{ if(s[i]=='0')
    c0++;
else c1++;

}
    if(n%2!=0)
    {
        if((c0%2==0 && c1%2!=0) ||(c1%2==0 && c0%2!=0) )
        {
            cout<<"YES"<<endl;
        
        continue; }
    }
    else
    {
        if(c0==c1 || c1==0 || c0 ==0 || c1%2==0)
        {
            cout<<"YES"<<endl;
        continue; }
    }
    cout<<"NO"<<endl;
    

}

    return 0;
}
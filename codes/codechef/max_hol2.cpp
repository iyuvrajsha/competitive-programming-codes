#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n,k; string s;
    cin>>n>>k; int h=0;
    cin>>s; int c0=0,ch=0;bool used=false,inuse=false;  
    for(int i=0; i<n;i++)
    {   if(s[i]=='1'&& !used ){
         s[i]='0'; inuse=true;
         }

         if(s[i]=='0')
         {
             c0++;
         }

         if(s[i]=='1'&& used)
         {
             c0=0;
              
         }
         else if(s[i]=='1' && inuse)
         {
             inuse=true;
             c0=1;

         }
         //cout<<" "<<s[i]<<" "<<inuse<<" "<<used<<" "<<c0<<" "<<h<<endl;
         if(c0==k)
         {
             h++;
             c0=0;
             if(inuse)
             used=true;
         }

    }
    cout<<h<<endl;
}

    return 0;
}
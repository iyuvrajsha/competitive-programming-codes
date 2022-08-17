#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n,k; string s;
    cin>>n>>k; int h=0;
    cin>>s; int c0=0,ch=0;bool flag=true;  
    for(int i=0; i<n;i++)
    {   
      
        if(s[i]=='0')
          c0++;
        if(s[i]=='0' && flag)
        {
            ch++;
        }
        if(s[i]='1'&& flag && ch==0)
        {
            ch=c0+1; c0=0; 
        }
     else if(s[i]=='1')//&& (ch!=0||(!flag)))
        {  
        
        ch=c0+1;
        c0=0;}
           if(c0==k||(ch==k && flag))
        {
            h++; if(c0!=k)
            {
                flag=false;
            }
        
            c0=0; ch=0;
        }
    
    }
    cout<<h<<endl;
}

    return 0;
}
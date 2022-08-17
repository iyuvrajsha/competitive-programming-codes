#include<bits/stdc++.h>
using namespace std;
int main()
{  int n; string s;
 
    cin>>n;
    cin>>s;
    int l=1;
    while(l<n)
    {// cout<<1;
    int sma=0,gre=0,eq=0,p=0;
    for(int i=1 ;i<n-(l-1);i++)
    { //cout<<2;
    if(s[p]>s[i])
    {
        sma++;
    }
    else if(s[p]<s[i])
    {
        gre++;
    }
     else if(s[p]==s[i]&&i!=n-(l-1)-1)
     {
         int t_p=p+1,t_i=i+1;
         while(true)
         { //cout<<3;
if(s[t_p]>s[t_i])
    {
        sma++; break;
    }
    else if(s[t_p]<s[t_i])
    {
        gre++; break;
    }
    if(t_i==n-(l-1)-1)
    {eq++;
    break;}
t_p++;
t_i++;}


         }
         else
         eq++;
        
         
     }  l++;
     cout<<gre<<" "<<eq<<" "<<sma<<endl;
}
return 0;
}

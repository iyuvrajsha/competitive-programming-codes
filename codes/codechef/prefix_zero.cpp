#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{  int n,k;
  cin>>n>>k; string s;
  cin>>s;   int l=1; bool flag[n]={0}; int m0=0;
  while(k--)
  { 
  for(int i=0;i<l;i++)
  { 
      
       if(s[i]=='0' && !flag[i] )
  {
      m0++;
      flag[i]=true;
  }

      //cout<<int(s[i]);
      /*if(s[i]=='9')
      {
          s[i]==
      }*/
      int x=  s[i]-'0';  cout<<" x "<<x<<" s "<<s[i]<<" i "<<i<<endl;
     s[i]=((x+1)%10)+'0';
     //cout<<s[i];
     if(i<n-2)
     if(s[i]==s[i+1])
     l++;
     
  } ;
  }
  
  
 cout<<m0<<endl;
  }

    return 0;
}
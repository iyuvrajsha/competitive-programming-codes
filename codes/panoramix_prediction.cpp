#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{ if(n==2)
   return true;
   bool flag=true;
    for(int i=2;i<n;i++)
     if(n%i==0)
     {
         flag=false;
         return false;
     }
     if(flag)
{ return true;    
}
}

int main()
{
    int n,m;
cin>>n>>m; bool flag=false;
if (is_prime(n))
for(int i=n+1;i<m;i++)
{
    flag= is_prime(i); if(flag) break;
}
if(is_prime(m)&& !flag) cout<<"YES";

else cout<<"NO";

   
}
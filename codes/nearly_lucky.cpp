#include<bits/stdc++.h>
using namespace std;
int main()
{ long long n,ct=0;
   cin>>n;
   while(n!=0)
   {  

       if(n%10==7||n%10==4)
       ct++;
  n/=10;

   }

 if(ct==4 || ct==7)
 {
     cout<<"YES";

 }
 else cout<<"NO";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t; cin>>t;
while(t--)
{ int n; cin>>n; int a[n]; int st=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
 for(int l=1,k=2;l<l=2*k ;l++)
 {
     for(int l=1,i=0;l < l+2*k,i<k;i++,l++)
     {  if(a[l+i]!=a[l+i+k])
         {a[l+i]=a[l+i+k];
         st++;
         }
         

     }
 }
cout<<st<<endl;
}

    return 0;
}
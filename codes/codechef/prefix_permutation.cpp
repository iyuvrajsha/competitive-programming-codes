#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ int k,n;
    cin>>n>>k; int a[k],b[n];

    for(int i= 0;i<k;i++)
    {
        cin>>a[i];
    
    }
    int i= 0; int j= 0;
    int v= a[j];int u=1;
while(i<n)
{  
   b[i]= a[j];
   i++;   cout<<b[i-1]<<" " <<a[j] <<endl;
   for(int k= u;;k++,i++ )
   {
       b[i]= k;   cout<<" "<<b[i]<<endl;
   }
   u= a[j]+1;
   j++;
}
for(auto h:b)
{
    cout<<h<<" ";
} cout<<endl;

}

return 0;
}
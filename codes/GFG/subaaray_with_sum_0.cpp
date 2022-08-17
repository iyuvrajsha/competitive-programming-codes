#include<bits/stdc++.h>
using namespace std;

 bool subArrayExists(int arr[], int n)
    { long long sum=0; vector<long long > v;
       long long p[n+1]={0}; bool flag=false;
       unordered_map< long long  ,int > m;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==0)
           {
               flag=true;
               break;
           }
           p[i+1]= arr[i]+p[i];
           m[p[i+1]]++;
           if((m[p[i+1]]>1) || p[i+1]==0)
           {
               flag=true;
               break;
           }
           
       }
       return flag;

             
     }

int main()
{ int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
bool ans= subArrayExists(a,n);
if(ans)
{
    cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;


    return 0;
}
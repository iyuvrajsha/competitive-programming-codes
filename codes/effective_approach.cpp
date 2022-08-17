#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n; int arr[n+1],hsh[n+1]={0};
for(int i=1;i<=n;i++)
{
    cin>>arr[i];
    hsh[arr[i]]=i;
}
int q;
cin>>q; long long v=0,p=0;
while(q--)
{ int x;
    cin>>x;
    v+=hsh[x];
    p+= (n-(hsh[x])+1);
}
cout<<v<<" "<<p;
    return 0;
}
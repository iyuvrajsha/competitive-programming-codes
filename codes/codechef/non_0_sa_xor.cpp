#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n; cin>>n;  int i=7,k=2;
if(n==1)
cout<<7;
else
    while(true)
    { 
     if(i^k!=0)
     { i=i^k;
     cout<<i<<" "; n--;
     } i++;
     if(n==0)
     break;
    }
cout<<endl;
}

    return 0;
}
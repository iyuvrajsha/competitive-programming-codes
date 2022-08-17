#include<bits/stdc++.h>
using namespace std;
int main()
{ string s; int r=0; int n;
cin>>n>>s;
for(int i=0;i<n;i++)
 if(s[i]==s[i+1])
  r++;
cout<<r;
}
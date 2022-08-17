#include<bits/stdc++.h>
using namespace std;
int main()
{  string s; int a=0;
 cin>>s;
 for(int i=0;i<s.size();i++)
 { if(s[i]<='Z' && s[i]>='A')
     a++;
 }
 int l= s.size();
 cout<<a<<" "<<l;
if(a==l||(a==1 && s[0]<='Z'&& s[0]>='A')||a==0)
cout<<"true";
else cout<<"false";
    return 0;
}
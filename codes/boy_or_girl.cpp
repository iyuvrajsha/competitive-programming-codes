#include<bits/stdc++.h>
using namespace std;
int main()
{ string s; set<char> m; int c=0;
cin>>s;
for(int i=0;i<s.size();i++)
{
    m.insert(s[i]);
}
for(auto a :m)
{c++;}
if(c%2==0)
cout<<"CHAT WITH HER!";

else cout<<"IGNORE HIM!";

    return 0;
}
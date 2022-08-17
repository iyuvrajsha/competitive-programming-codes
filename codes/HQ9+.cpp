#include<bits/stdc++.h>
using namespace std;
int main()
{ string s;
cin>>s; bool flag= false;
for(auto c:s)
{
    if(c=='H'||c=='Q'||c=='9')
    {
        flag=true;
        break;
    }
}
if(flag)
{
cout<<"YES";
}
else cout<<"NO";


    return 0;
}
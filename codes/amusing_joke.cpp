#include<bits/stdc++.h>
using namespace std;

int arr[26];
int main()
{  string g,h,l;
cin>>g>>h>>l;

for(int i=0;i<g.size();i++)
{ arr[g[i]-'A']++;

}
for(int i=0;i<h.size();i++)
{ arr[h[i]-'A']++;

}
for(int i=0;i<l.size();i++)
{ arr[l[i]-'A']--;

}
bool flag=true;
for(int i=0;i<26;i++)
{
    if(arr[i]!=0)
     {flag=false; break;
}

}
if(flag)
{
    cout<<"YES";
}
else{
    cout<<"NO";
}

    return 0;
}
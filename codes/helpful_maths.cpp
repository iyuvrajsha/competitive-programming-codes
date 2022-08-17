#include<bits/stdc++.h>
using namespace std;
int main()
{ string s; int c1=0,c2=0,c3=0;
cin>>s;  char an[s.size()];
for(int i=0;i<s.size();i+=2)
{   if(s[i]=='1') c1++;
  else if(s[i]=='2') c2++;
  else if(s[i]=='3')c3++;

}
int p=0;
while(c1--)
{cout<<1; p++;
if(p!=s.size())
{cout<<'+';
p++;
}
}
while(c2--)
{cout<<2; p++;
if(p!=s.size())
{cout<<'+';
p++;
}
}
while(c3--)
{cout<<3; p++;
if(p!=s.size())
{cout<<'+';
p++;
} }




    return 0;
}
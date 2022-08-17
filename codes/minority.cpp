#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;   int c0=0,c1=0,oc=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {c0++;
        }
        else
        c1++;
         if(c0>c1)
    {
       oc= max(c1,oc);
    }
    else if(c1>c0)
    {
       oc= max(oc,c0);
    }
        

    }
   cout<<oc<<endl;
}

    return 0;
}
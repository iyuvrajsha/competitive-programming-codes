#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    string s; int c=0,n=0,x;
    cin>>x;
    cin>>s;
    for(int i=0;i<14;i++)
    {
        if(s[i]=='C')
        {
            c+=2;
        }
        else if(s[i]=='N')
        {
            n+=2;
        }
        else
        {
            c+=1;
            n+=1;
        }
    }
    if(c>n)
    {
        c= x*60;
    }
    else if(n>c)
    {
        c= x*40;
    }
    else
    c= x*55;

    cout<<c<<endl;
}

    return 0;
}
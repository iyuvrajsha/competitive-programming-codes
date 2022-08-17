#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{  int c[26]={0}; bool flag=false;
    string s; int n; cin>>n;
    cin>>s;
    if((s.size()) % 2 !=0)
    {
        cout<<"NO"<<endl;
        continue;
    } 
    for(int i= 0; i<n-1;i++)
    {
            c[s[i]-'a']++;
            if(c[s[i]-'a'] > n/2)
            {
                flag=true;
                break;
            }
    }
    if(flag)
    {
        cout<<"NO"<<endl;
        continue;
    }
   for(int i= 0; i<n/2;i++)
{
    if(s[((n/2)-1)-i]==s[(n/2)+i])
    {
        swap(s[i],s[(n/2)+i]);
    }
}
cout<<s<<endl;
}

    return 0;
}
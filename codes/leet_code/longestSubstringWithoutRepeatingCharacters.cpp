#include<bits/stdc++.h>
using namespace std;
int f(string s)
{
    unordered_map<char,int>m;
    int ml= 0,msi=0,i=0,j=1;

    while(i<s.size())
    {
        if(m[s[i]]!=0)
        {
            m.clear();
            msi=0;
            i=j;
            j++;
            continue;
        }
        else
        {
            m[s[i]]++;
            msi++;
        }
    ml= max(ml,msi);
    i++;
    }
    return ml;
}
int main()
{
    string s;
    cin>>s;
    cout<<f(s);
}
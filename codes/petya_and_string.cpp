#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;  int a=0;
    for(int i=0;i<s1.size();i++)
    {
        if(tolower(s1[i])<tolower(s2[i]))
        {
            a=-1;
            break;
        }
        if(tolower(s1[i])>tolower(s2[i]))
        {
            a=1;
            break;
        }
    }
    cout<<a;
}
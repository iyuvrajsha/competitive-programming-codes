#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char> a;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.' ) //&& (s[i+1]=='.')||(s[i+1] == '-'&&s[i+2]=='-'))
        {
            a.push_back('0');
        }
        else if(s[i]=='-' && s[i+1]== '.')
        {
            a.push_back('1');
            i++;
        }
        else
        {
            a.push_back('2');
            i++;
        }
    }
    for(auto c : a)
    cout<<c;
}
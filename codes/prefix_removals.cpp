#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int st=0; unordered_map<char,int> m;
        m[s[0]]++;
        for(int i=1;i<s.size();i++)
        {
            m[s[i]]++;
            /*if(m[s[i]]>1 && s[i]== s[st])
            {
                st++;
                m[s[i]]--;
            }*/
        }
while(true)
        { m[s[st]]--;
            if(m[s[st]]>=1)
        {
            st++;
        }
        else break;
        }
        for(int i=st;i<s.size();i++)
        {
            cout<<s[i];
        }cout<<endl;
    }
}
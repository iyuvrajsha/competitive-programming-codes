#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n; int x=0;
while(n--)
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            x++;
            i++;
        }
        else if(s[i]=='-')
        {
            x--;
            i++;
        }
    }

}cout<<x;
    return 0;
}
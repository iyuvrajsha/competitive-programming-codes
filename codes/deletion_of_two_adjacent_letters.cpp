#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    char c;
    cin>>s>>c; bool flag= false;
    for(int i =1;i<s.size()+1;i++)
    {
        if(s[i-1]== c && i%2 !=0)
        {
            flag= true;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

}
}
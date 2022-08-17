#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
{
    int n;
    string s;
    cin>>n>>s;
    int n1= n;
    for(int i =0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            n1--;
        }
    }
    cout<<n1<<endl;
}
}
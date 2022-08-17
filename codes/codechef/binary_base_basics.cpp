#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n,k,d=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[(n-1)-i])
        {
                d++;
        }
    }
    if(k<d)
    {
        cout<<"NO"<<endl;
        
    }
    else if(n%2!=0) 
    {
        cout<<"YES"<<endl;
    }
    else if(d%2==0 && k%2 == 0)
    {
        cout<<"YES"<<endl;
        
    }
    else if(d%2!=0 && k%2 != 0)
    {
cout<<"YES"<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
}

    return 0;
}
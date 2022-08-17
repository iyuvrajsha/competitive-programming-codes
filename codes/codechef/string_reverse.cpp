#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    
    string s;
    cin>>s; int steps=0,ss=0 ;
    int n= s.size(); bool f =0 ;
int n1= n;
    for(int i=0,j= n-1;i<n/2;i++)
{
    if(s[i]==s[j])
    {
       ss++; 
    }
    else 
    { f= true;
    n++;
    steps+=ss+1;
    ss=0;
    continue;
    }
    j--;
}
//cout<<"ste "<<steps<<" "<<f<<endl;
if(f)
cout<<steps<<endl;
else
cout<<0<<endl;
}

    return 0;
}
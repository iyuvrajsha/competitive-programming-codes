#include<bits/stdc++.h>
using namespace std; 

string reverseWord(string s)
{ 
   int l=s.size(); string re=s;

for(int i= s.size()-1,j=0;i>=0;i--,j++)

{
    re[j]=(s[i]);
}
    return re; }


int main()
{ string s; 
cin>>s;  
cout<<reverseWord(s);   return 0;
}
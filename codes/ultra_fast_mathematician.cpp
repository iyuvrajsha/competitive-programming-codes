#include<bits/stdc++.h>
using namespace std;
int main()
{  string a,b;
cin>>a>>b; int l=a.size(),an[l];

for(int i=l-1;i>=0;i--)
{
    an[i]= int(a[i])^ int(b[i]); 
    
}
for(auto ann: an)
cout<<ann;
   
    
    return 0;
}
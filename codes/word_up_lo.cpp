#include<bits/stdc++.h>
using namespace std;
int main()
{  string s; 
cin>>s; int u=0,l=0;
for(int i=0; i<s.size();i++)
{
 if(isupper(s[i]))
  {u++; 
    }
  else
  {l++;
   }
  
}
char a[s.size()];
if(u>l)
 for(int i=0; i<s.size();i++)
 {a[i]=toupper(s[i]); cout<<a[i];}
 else
 for(int i=0; i<s.size();i++)
  {a[i]= tolower(s[i]); cout<<a[i];}

   
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     string s,n;
     cin>>n>>s;
long long ni= n[0]- '0';
     vector<long long > nn,ss,nn_2;
     for(int i= 1;i<n.size();i++)
     {
         ni*=10;
         ni+= n[i];
     }
     
     for(int i= s.size()-1;i>=0;i--)
     {    ss.push_back(s[i]- '0');    }
      for(int i= n.size()-1;i>=0;i--)
     {    nn.push_back(n[i]- '0');    }
    for(auto it= --nn.end(); it>= nn.begin(); it--)
    { long long ml;
         ml= (*it) * ni;
         nn.push_back(ml % 10);
        
    }
 }
}
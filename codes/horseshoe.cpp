#include<bits/stdc++.h>
using namespace std;
int main()
{  set<int> m; int c=0;
  for(int i=0;i<4;i++)
  { int x;
      cin>>x;
      m.insert(x);
      
  }
for(auto i :m)
{c++;}
cout<<4-c;
    return 0;
}
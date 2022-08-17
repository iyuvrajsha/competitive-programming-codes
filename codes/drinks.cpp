#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
 cin>>n; double an=0;
 for(int i=0;i<n;i++)
 {int x;
     cin>>x;
     an=an+x;
 }
cout<<std::setprecision(12)<<an/n;
    return 0;
}
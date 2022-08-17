#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
cin>>t;
while(t--)
{
 int n,x;
 cin>>n>>x;
 while(x>n)
 {
     x= x-(n+1);
 }
 cout<<x<<endl;

}

    return 0;
}
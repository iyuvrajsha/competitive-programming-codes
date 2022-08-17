#include<bits/stdc++.h>
using namespace std;
int main()
{ int t,x,y,z;
cin>>t;
while(t--)
{  cin>>x>>y>>z;
 if(x>y)
 cout<<"PIZZA"<<endl;
 else if(x>z)
 cout<<"BURGER"<<endl;
 else cout<<"NOTHING"<<endl;


}


    return 0;
}
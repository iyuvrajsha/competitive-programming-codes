#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
cin>>t;
while(t--)
{  int x,y;
cin>>x>>y;
int rm;
rm= (y*2)-1;
if(x-y !=0)
{
    rm = rm+ x-y +1;
}
cout<<rm<<endl;
}

    return 0;
}
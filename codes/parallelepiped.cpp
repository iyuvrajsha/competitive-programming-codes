#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,x,y,z;
    cin>>a1>>a2>>a3;
    x= sqrt((a2*a3)/a1);
    y= sqrt((a1*a3)/a2); 
    z= sqrt((a2*a1)/a3);
cout<<(x+y+z)*4<<endl;

}
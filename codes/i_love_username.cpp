#include<bits/stdc++.h>
using namespace std;
int main()
{ int n; int x; int a=0;
cin>>n;
cin>>x;
int m=x,mi=x;
for(int i=1;i<n;i++)
{  int x;
    cin>>x;
    if(x>m)
    {
        a++;
        m=x;
    }
    else if(x<mi)
    {
        a++;
        mi=x;
    }

}
cout<<a;


    return 0;
}
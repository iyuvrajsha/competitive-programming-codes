#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    long long x;
    cin>>x;
    if(x%2!=0)
    cout<<x-1<<" "<<x<<" "<<x+2<<endl;
    else
    cout<<x+2<<" "<<x<<" "<<x+1<<endl;

}

    return 0;
}
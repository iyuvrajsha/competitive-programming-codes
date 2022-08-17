#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{int res;
if (n== 0)
{
    cout<<n<<endl;
    return 0 ;
}
else if(n==1)
{
    cout<<n<<endl;
    return 1;
}

else 
{    res = fib(n-1)+fib(n-2);
return res;
    cout<<res<<endl;
   // return res;
}
}
int main()

{
    int n;
    cin>>n;
    fib(n);
}
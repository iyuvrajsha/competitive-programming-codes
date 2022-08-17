#include<bits/stdc++.h>
using namespace std;
bool isprime(long long x,int n)
{  bool flag= true;
    for(long long i= 2; i<=n; i++)
    {
        if(x%i== 0)
        {
            flag= false;
        }
    }
    return flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;long long x;
        cin>>n>>x;
        int v;
        if(n%2==0)
        {
            v= (n/2) * ((n/2)+1);
        }
        else
        {
            v= ((n/2)+1)* ((n/2)+1);
        }

        if(x==0  || x> v)
        {
            cout<<"no"<<endl;
            continue;
        }
        else if(x>n && isprime(x,n))
        {
            cout<<"no"<<endl;
            continue;
        }
        else 
        {
            cout<<"yes"<<endl;
        }
    }
}
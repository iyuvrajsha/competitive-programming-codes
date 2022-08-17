#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,n1; int e=0,o=0;
        cin>>n; n1=n;
        while(n!=0)
        {   int ho= n%10;
            if((n%10)%2==0)
                e++;
            else o++;
            n=n/10;
           // cout<<"n "<<n<<endl;
        }
        if(e>1 && n1%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(0>1 && n1%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
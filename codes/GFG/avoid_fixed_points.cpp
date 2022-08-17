#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    long long a[n+1]; long long st=0; long long c=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i] == i+c)
        {
            st++;
            c++;
        }
    }
cout<<st<<endl;
}

    return 0;
}
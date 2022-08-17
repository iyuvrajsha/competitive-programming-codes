#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ll;
        cin>>n;
        if(n>19)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
              for(int i =0;i<n;i++)
        {
            cout<<long(pow(3,i))<<" ";
        }
        cout<<endl;
    }
}
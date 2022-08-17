#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<n+1;i++)
        {
            cin>>a[i];

        }
        int con1= 0;
        int pr= 0;
        int js=1;
        for(int i= 1;i<n;i++)
        {
                if(a[i]==1 && a[i+1]== 1)
                {
                    con1++;
                }
        }
        cout<<n-(con1+1)<<endl;
    }
}
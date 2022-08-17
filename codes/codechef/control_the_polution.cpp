#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;int m=INT_MAX;
        for(int i=0;i<=n;i++)
        {  if(i!=0 && n-i !=0 )
            m= min(m,((((i-1)/100)+1)*x)+ ((((n-i -1)/4)+1)*y));
            else if(i==0)
            {
                m= min(m, (((n-i -1)/4)+1)*y);
            }
            else if(n-i==0)
            {
                m= min(m, (((i-1)/100)+1)*x);
                
            }
        }
        cout<<m<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[8];
    for(int i=1;i<8;i++)
    {
        cin>>a[i];
    }
   int pg=n;
   int ans;
    while(pg>0)
    {
        for(int i=1;i<8;i++)
        {
            pg-= a[i];
            //cout<<" pg"<<pg<<endl;
            if(pg<= 0)
            {ans= i;
            break;
            }
        }
    }
    cout<<ans<<endl;  
}
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n,k,x;
    cin>>n>>k>>x;

    if(x>k)
    cout<<-1<<endl;

    else
     for(int i=0,j=0;j<n;i++,j++)
     { if(i==x)
        i=0;
        cout<<i<<" ";
        }

        
    cout<<endl;     
     }


    return 0;
}
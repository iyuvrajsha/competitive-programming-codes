#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n%2==0)
        {
            int i= x-n/2; 
            while(n--)
            {
                if(i==x)
                {n++;i++;
                continue;
                }
                else 
                cout<<i<<" ";
                i++;
            }cout<<endl;
        }
        else{
             int i= x-n/2; 
            while(n--)
            { cout<<i<<" ";
                i++;
            } cout<<endl;
        }
    }
}
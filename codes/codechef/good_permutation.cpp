#include<bits/stdc++.h>
using namespace std;
bool if_(int n)
{ bool flag =true;
    while(n!=0 && n!= 1)
    {    //cout<<" n "<<n<<endl;
        if(n%2 !=0)
            return false;
        n/=2;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2!=0)
        {
        if(if_(n-1) && n!=1)
        { 
            for(int i=0;i<n;i++)
            {
                if(i==0)
                cout<<n<<" ";
                
                else if(i<n-2)
                {
                    cout<<i+2<<" ";
                }
                else 
                {cout<<"1 2"<<endl;
                i++;
                }
            }
        }
        else 
        cout<<-1<<endl;
        }
        else
        {
            for(int i=n;i>=1;i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
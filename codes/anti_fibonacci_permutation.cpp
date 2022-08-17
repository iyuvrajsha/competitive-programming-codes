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
        for(int j= 2,it=1 ;it<= n;j++,it++)
        { int tms= 0;
            for(int i= j; i<=n;i++)
        {
            cout<<i<<" ";
            tms++;
        }
        for(int i= n- tms;i>=1;i--)
        {
            if(it== n && i ==2)
            {
                cout<<1<<" "<<2;
                break;
            }
            else
            cout<<i<<" ";
        }
cout<<endl;
        }

    }
}
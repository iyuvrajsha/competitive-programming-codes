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
        long long a[n];
        long long sm1=0,sm2= 0;
        for(int i= 0;i<n;i++)
        {
            int x;
            cin>>x;
            a[i]= abs(x);
            if(i%2==0)
            sm1+= a[i];
            else
            sm1-= a[i];
        }
        long long nm=INT_MIN,pm= INT_MAX;
        
        for(int i= 0;i<n;i++)
        {   
            if(i%2== 0)
            {
                if(a[i]<pm)
                {
                    pm= a[i];
                }
            }
            else
            {
                if(a[i]>nm)
                {
                    nm= a[i];
                }
            }
        }
        sm2= sm1 + (2*nm) - (2*pm);
        //cout<<nm<<" "<<pm<<endl;;
        cout<<max(sm1,sm2)<<endl;
    }
}
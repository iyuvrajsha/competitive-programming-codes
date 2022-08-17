#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        bool fl[n]= {true};
        for(int i =0;i< n-1;i++)
        {int d1,d2;
            if(b[i]>= a[i])
            d1= ((b[i]-'a')-(a[i]-'a'));
            else
            d1= (b[i]-'a') + (26 - (a[i]- 'a'));
            if(b[i+1]>= a[i+1])
            d2= ((b[i+1]-'a')-(a[i+1]-'a'));
            else
            d2= (b[i+1]-'a') + (26 - (a[i+1]- 'a'));
         // cout<<" d1 "<<d1<<" d2 "<<d2<<endl;
       fl[i] = d1== d2;
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--;r--;
            if(l==r)
            {
                cout<<"YES"<<endl;
                continue;
            } bool f= false;
            int yuv=l;
            if(l>1)
            yuv++;
            if(r-l== 1)
            f= fl[l];
            else
            for(int i= yuv;i< r;i++ )
            {
                if(fl[i])
                {
                  f= true;
                }
                
            }
            if(f)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
}
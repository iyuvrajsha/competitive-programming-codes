#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        long long l,r,a; long long ans;
        cin>>l>>r>>a;
        long long v= r/a;
        long long x= (a*v)-1;
        if(r% a >= x%a)
        {
            x= r;
        }
        if(x<l)
        {
            if(l== r)
            {
                x= l;
            }
            else
            x= r;
        }
        //cout<<" x "<<x<<endl;
        cout<<(x/a) + (x%a)<<endl;

    }
    
}
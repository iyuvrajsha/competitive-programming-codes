#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; int x[n],y[n];
    int ans=0;
    for(int i=0;i<n;i++)
    {  cin>>x[i]>>y[i]; }
    for(int i = 0;i<n ;i++)
    {  bool fl=false,fr= false,fa=false,fb= false;
        for(int j=0;j<n;j++)
        { //cout<<" xi"<< x[i]<<" yi "<<y[i]<<" xj"<<x[j]<<" yj "<<y[j]<<endl;
            if(x[j]>x[i] && y[i]== y[j])
            {
                fr= true;
                //cout<<1<<endl;
            }
            else if(x[j]<x[i] && y[i]==y[j])
            {
                fl= true;
                //cout<<2<<endl;
            }
            if(y[j]>y[i] && x[i]== x[j])
            {
                fa= true;
                //cout<<3<<endl;
            }
            else if(y[j]<y[i]&& x[i]== x[j])
            {
                fb= true;
                //cout<<4<<endl;
            }
        }
        if(fl && fr && fa && fb)
        { //cout<<" huh "<<endl;
            ans++;
        }
    }
cout<<ans<<endl;
    
}
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    long long a[n],b[n];
    long long m1 = INT_MAX ,m2= INT_MAX,m3=INT_MAX,m4=INT_MAX,w,x,y,z ;
    bool fla[n] = {false},flb[n] = {false};
    for(int i= 0;i<n;i++)
    {
        cin>>a[i];
    } 
    flb[0]= true;
    for(int i = 0; i<n;i++)
    {
        cin>>b[i];
        if(abs(a[0]-b[i])< m1 )
        {
            m1= abs(a[0]- b[i]);
            w= i;
        }
    }
    for(int i = n-1; i>=0;i--)
    {
        if(abs(a[n-1]-b[i])< m2 )
        {
            m2= abs(a[n-1]- b[i]);
            x=i;
        }
    }
    for(int i = n-1; i>=0;i--)
    {
        if(abs(a[i]-b[n-1])< m4 )
        {
            m4= abs(a[i]- b[n-1]);
            z=i;
        }
    }
    for(int i = 0; i<n;i++)
    {
        if(abs(a[i]-b[0])< m3 )
        {
            m3= abs(a[i]- b[0]);
            y= i;
        }
    }
    if(w==0 ) 
    {
        m3= 0;
    }
    else if(y== 0)
    {
        m1= 0;
    }
    else if (w== n-1)
    {
        m4= 0;
    }
    else if (y== n-1)
    {
        m2=0;
    }
    if(z== n-1)
    {
        m2= 0;
    }
    else if(z==0 && m4 !=0 )
    {
        m1= 0;
    }
    else if(x== 0)
    {
        m3= 0;
    }
    else if(x==n-1 && m2 !=0 ) 
    {
        m4= 0;
    }
    
    //cout<<w<<" "<<x<<" " <<y<<" "<<z<<endl;
    //cout<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<endl;
    long long ans= m1+m2+m3+m4;
    cout<<ans<<endl;   

}
}

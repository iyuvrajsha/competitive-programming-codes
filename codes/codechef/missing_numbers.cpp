#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a[4];
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        map<int,int> m; bool flag=false; long long ansx,ansy;
        m[a[0]]++;m[a[1]]++;m[a[2]]++;m[a[3]]++;
        //cout<<1;
        for(int i=0;i<4;i++)
        {
            //cout<<3<<endl;
            for(int j=i+1;j<4;j++)
        {// cout<<5<<endl;
            long long s,d,x,y;
        s=a[i]+a[j];
        d= abs(a[i]-a[j]);
        x=s/2;
        y=d/2;//cout<<4<<endl;
        cout<<" a[i] "<<a[i]<<" a[j] "<<a[j]<<" x "<<x<<" y "<<y<<endl;
        if(y!=0)
        if(m[x+y]>0 && m[x-y]>0 && m[x*y]>0 && m[x/y]>0)
        {
            ansx=x;ansy=y; flag=true;
            break;
        } //cout<<6<<endl;
        } //cout<<2;
        if(flag)
        {
            break;
        }
        }
        if(flag)
        {
            cout<<ansx<<" "<<ansy<<endl;
        }
        else 
        cout<<-1<<endl;
    }
}
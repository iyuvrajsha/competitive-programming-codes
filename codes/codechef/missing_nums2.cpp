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
        sort(a,a+4); bool flag=false;
        int x1=(a[2]+ a[0])/2,x2,y2,x3,x4,y3,y4;
        int y1=(a[2]- a[0])/2;
        x2= (a[2]+ a[1])/2;
        y2=(a[2]- a[1])/2;
        x3= (a[3]+ a[0])/2;
        y3=(a[3]- a[0])/2;
        x4= (a[3]+ a[1])/2;
        y4=(a[3]- a[1])/2;
        if(y1!=0 )
        {if((x1*y1==a[3]  && x1/y1== a[1] ) )
        {
            cout<<x1<<" "<<y1<<endl;
            continue;
        }
        }
        if(y2!=0)
        {
            if(( x2*y2==a[3]  && x2/y2== a[0] ))
            {
                cout<<x2<<" "<<y2<<endl;
                continue;
            }
        }
        if(y3!=0)
        {
            if(( x3*y3==a[2]  && x3/y3== a[1] ))
            {
                cout<<x3<<" "<<y3<<endl;
                continue;
            }
        }
        if(y4!=0)
        {
            if(( x4*y4==a[2]  && x4/y4== a[0] ))
            {
                cout<<x4<<" "<<y4<<endl;
                continue;
            }
        }
        cout<<"-1 -1"<<endl;
    }
}
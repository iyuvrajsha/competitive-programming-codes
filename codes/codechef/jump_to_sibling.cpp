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
        long long a[n]; int p,s,e,d= INT_MIN;
        for(int i=0;i<n;i++)
        { cin>>a[i];

        }
        long long steps=0;
        p= a[0]%2;
        if(a[0]%2 == a[n-1]%2)
        {
            for(int i=1;i<n;i++)
            {
                if(p == a[i]%2)
                {
                    steps++;
                }
            }
        }
        else 
        { s=0; bool f= false;
            for(int i=1;i<n;i++)
            {
                if(a[i]%2 != p)
                {
                    if(i-s > d)
                    {
                        e= i;
                        d= e-s;
                        
                    }
                    f=true;
                }
                else 
                {
                    if(f)
                    {
                        s=i;
                    }
                    f= false;
                }

            } f= false; int i=0;
            if (s== 0 && !f)
                {
                    i=e+1;
                    steps++;
                    f= true;
                    p=!p;
                }
            for(;i<n;i++)
            {
                if(i==s)
                {
                    i=e;
                    steps++;
                    f=true;
                    p = !p;
                    continue;
                }
                if(a[i]%2 == p)
                {
                    steps++;
                }
                
            }
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n]; int c0=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
c0++;
        }
    } 
    int s=0,e= n-1,pts=-1,pte; long long ss=a[0],se=a[n-1]; bool flag =false;

    while(true)
    {  
        if(ss>se)
        { se+=a[e];
            e--;
        }
        else if(se>ss)
        { ss+=a[s];
            s++;
        }
        else if(se==ss && s!= e)
        {
pts= s; pte=e; s++;e--; se+=a[e];ss+=a[s];
        }
        else if (pts!=-1 && s== e)
        {
  flag=true;
        }
        if(s==e)
        break;
    }cout<<" 111"<<flag<<endl;
    if(flag)
    {   if(a[pts]!=0)
        cout<<1 + pow(2,c0)-1<<endl;
        else 
        cout<<1 + pow(2,c0-2)-1<<endl;
    }
    else cout<<0<<endl;
}
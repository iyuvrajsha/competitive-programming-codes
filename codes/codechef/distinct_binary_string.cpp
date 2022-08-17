#include<bits/stdc++.h>
using namespace std;
int main() 
{ int t;
cin>>t;
while(t--)
{
    int n;
    string s;
    cin>>n>>s; 
    bool f[n]= {0};
    int d[n]= {0};
    long long d1= 1,md=1;
    for(int i= n-1;i>0;i--)

    {
            if(s[i]!=s[i-1])
            {
                f[i-1]= true;
                d[i-1]= d[i]+1;
               // cout<<" s[i "<<s[i]<<endl;
            }
            
    }
    for(int i =1;i<n;i++)
    {
        if(s[i]!= s[i-1])
        {
            d1++;
            md= max(md,d1);

        }
        else if(f[i])
        {
            d1+= d[i];
            md= max(d1,md);
            
            //cout<<" y "<<endl;

            break;
        }
        else
        d1=1;
    }
    cout<<md<<endl;
}

    return 0;
}
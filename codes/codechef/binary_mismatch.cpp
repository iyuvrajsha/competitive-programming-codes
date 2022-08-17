#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if(n%2==0)
        {cout<<"yes"<<endl;
        int c1=0,c0=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            c0++;
            else c1++;
         }
         int st=1,e=n;
         if(c0!=c1)
         {
             for(int i=0;i<n;i++)
             {
                 if(s[i]== '1')
                 {
                     c1--;
                     c0++;
                 }
                 else 
                 {c0--; c1++; }

                 if(c0==c1)
                 {
                     e=i+1;
                     break;
                 }
             }
         }
         cout<<st<<" "<<e<<endl;
        }

        else cout<<"no"<<endl;
    }
}
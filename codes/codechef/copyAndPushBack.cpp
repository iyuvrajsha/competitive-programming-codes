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
        string a;
        cin>>a;
        if(a[0]!=a[1])
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool o2=false,any=true,ans =true;;int p=0,p2,o2Len; 
        for(int i=2;i<n;i++)
        {
            if(any && a[p]==a[i])
            {   
                    if(a[2*i-1] == a[i-1])
                    {
                        o2=true;
                        p++;
                    }
                    else{
                        o2=true;
                    }

            }
            if(a[i]!=a[p] && any)
            {
                o2=true;
                o2Len=i;
                if((o2Len+1)*2>n &&i+1 !=n)

                {
                    ans=false;
                    break;
                }
            }
            else if(o2 && a[i]!=a[p])
            {
                ans=false;
                break;
            }
            else if(o2 && a[i]== a[p])
            {
                if(o2Len==p)
                {
                    any=true;
                    p=0;
                    p2=0;
                    if(i>=n-2 )
                    {
                        break;
                    }
                    else if((i+1)*2>n)
                    {
                        ans=false;
                        break;
                    }
                }
                else p++;
            }
        }
        if(ans)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}
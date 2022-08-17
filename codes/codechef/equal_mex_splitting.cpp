#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=1;
        cin>>n;
        int a[n];
    
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
        }
        int i=0;
        while(i<n)
        { int hsh[100010]= {0};
        if(i!=0)
        {
        hsh[a[i]]++;
        i++;
        }
            for(; i<n;i++)
        {
            if(hsh[a[i]]==0)
            {hsh[a[i]]++;
        //cout<<" a i "<<a[i]<<endl;
            }  
            else
            {
                c++;
                //cout<<" c "<<c<<endl;
                
                break;
            }
        }
        }
        cout<<c<<endl;

    }
}
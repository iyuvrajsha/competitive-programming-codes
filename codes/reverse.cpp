#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; int a[n];
        for(int i=0;i<n;i++)
        {  cin>>a[i];

        }
        for(int i=0;i<n;i++)
        { int s=a[i]; bool f= false; int j,pos;;
            for( j=i+1;j<n;j++)
            {
                if(a[j]<s)
                {
                    s=a[j];
                    f=true;
                    pos=j;
                    // cout<<" yu "<<endl;
                }
            }
            if(f)
            {//cout<<" r "<<endl;            
                for(int k=i,l=pos;k<l;k++,l--)
                {
                    swap(a[k],a[l]);
                }
                break;
            }

        }
        for(auto h: a)
        {
            cout<<h<<" ";
        }
        cout<<endl;
    }
}
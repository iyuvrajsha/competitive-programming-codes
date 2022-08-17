#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ int k,n;
    cin>>n>>k; int a[k],b[n+1]; bool hsh[n+1]= {0};

    for(int i= 0;i<k;i++)
    {
        cin>>a[i];
        hsh[a[i]]=true;
    }
    sort(a,a+k); int u=1;
for(int i=1,j=0;i<=n;i++)
{
        if(hsh[i])
        {
        b[i]= u;
        u= a[j]+1;
        j++;
        }
        else{
            if(i!=n)
            b[i]= i+1;
            else 
            b[i]=b[i-1]-1;
        }

}

    for(int i= 1;i<=n;i++)
    {
        cout<<b[i]<<" ";
    
    }cout<<endl;
}

return 0;
}
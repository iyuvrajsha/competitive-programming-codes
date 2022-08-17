#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+1]; int ans=0;
    int ac[m+1];
    for(int i=0;i<m+1;i++ )
    {
        cin>>a[i];
        ac[i]= a[i];
    }
    int b[m+1][n]= {0};
    for(int j=0;j<m+1;j++)
    for(int i = 0;i<n;i++)
    {   if(a[j] & 1 == 1)
    {
        b[j][i] =1;
    }
    else b[j][i]= 0;
        //a[i]= 
        a[j]= a[j]>>1;
        
    }
    /*for(int i= 0;i<m+1;i++)
    for(int j=0;j<n;j++)
    {
        //cout<<"a i "<<ac[i]<<" b ij "<<b[i][j]<<endl;
    }*/
    for(int j= 0;j<m;j++)
    {  int kd =k; bool fl= true;
        for(int i = 0;i<n;i++)
    {   if(a[j] & 1 == 1)
    {
        b[j][i] =1;
    }
        a[j]>>1;
    }
    for(int i = 0;i<n;i++)
    {if(kd==0 )
        {
                fl= false;
                break;
        }
        if(b[j][i]!= b[m][i])
           { kd--;
           //cout<<" a[j] "<<a[j]<<endl;
           }

    }
    if(fl)
    {   //cout<<" a[j] "<<a[j]<<endl;
        ans++;
    }
    }
    cout<<ans<<endl;
}
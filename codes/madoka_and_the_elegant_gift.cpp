#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m]= {1};
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                a[i][j]= s[i][j] - '0';
            }
        }bool flag= true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {   if(i!=0 || j!= 0 || j!=n-1)
                if(a[i][j] == 1 && a[i-1][j]== 1 && (a[i][j-1]==0 || a[i][j+1]==0) && ((a[i-1][j-1]==0 && a[i][j-1]==1)  || (a[i-1][j+1]==0 && a[i][j+1]==1)))
                {
                    flag= false;
                   // cout<<"a "<<i<<" j "<<j<<endl;
                    break;
                }
                if(i!=n-1 || j!= 0 || j!=n-1)
                if(a[i][j] == 1 && a[i+1][j]== 1 && (a[i][j-1]==0 || a[i][j+1]==0)&& ((a[i+1][j-1]==1 && a[i][j-1]==0)  || (a[i+1][j+1]==1 && a[i][j+1]==0)))
                {
                    flag= false; //cout<<"b i "<<i<<" j "<<j<<endl;
                    break;
                    
                }
                    if(i!=0 || i!= n-1 || j!=n-1)
                 if(a[i][j] == 1 && a[i][j+1]== 1 && (a[i-1][j]==0 || a[i+1][j]==0) &&(((a[i-1][j+1]==1 && a[i-1][j]==0) || (a[i+1][j]==1 && a[i+1][j+1]==0)) ))
                {
                    flag= false;//cout<<"c"<<i<<" j "<<j<<endl;
                    break;
                }
                   if(i!=0 || i!= n-1 || j!=0)
                 if(a[i][j] == 1 && a[i][j-1]== 1 && (a[i-1][j]==0 || a[i+1][j]==0) &&(((a[i-1][j-1]==1 &&a[i-1][j]==0) || (a[i+1][j-1]==1 && a[i+1][j]==0)) ))
                {
                    flag= false;//cout<<"d"<<i<<" j "<<j<<endl;
                    break;
                }


            } if(!flag)
            break;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
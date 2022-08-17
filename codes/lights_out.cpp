#include<bits/stdc++.h>
using namespace std;

int main()
{int n; bool ans[5][5]={};
for(int i=1;i<4;i++)
 {
        for(int j=1;j<4;j++)
        ans[i][j]=1;

    
    }
    for(int i=1;i<4;i++)
    
    {for(int j=1;j<4;j++)
    {
        cin>>n;
        if(n%2!=0)
        {
            if(ans[i][j]==1)
            {
                ans[i][j]=0;
            }
            else
            ans[i][j]=1;

            if(ans[i-1][j]==1)
            {
                ans[i-1][j]=0;
            }
            else
            ans[i-1][j]=1;

            if(ans[i][j-1]==1)
            {
                ans[i][j-1]=0;
            }
            else
            ans[i][j-1]=1;

         

            if(ans[i][j+1]==1)
            {
                ans[i][j+1]=0;
            }
            else
            ans[i][j+1]=1;

            if(ans[i+1][j]==1)
            {
                ans[i+1][j]=0;
            }
            else
            ans[i+1][j]=1;


    

        } //cout<<ans[i][j]<<" ";
    } //cout<<endl; 
    }
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        cout<<ans[i][j];

        cout<<endl;
    }
}
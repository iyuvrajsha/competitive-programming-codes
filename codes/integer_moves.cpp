#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    bool ed[50][50]={0};
    /*for(int i=0;i<51;i++)
    {
        for(int j= 0;j<51;j++)
        {int sq= sqrt((i*i)+(j*j));
                if(sq * sq == (i*i)+(j*j))
                {
                    ed[i][j]= 1;
                    
                }
                cout<<" ("<<i<<" "<<ed[i][j]<<" "<<j<<" )";
        }cout<<endl;
    }*/
    while(t--)
    {
        int x,y;
        cin>>x>>y; int sq= sqrt((x*x)+(y*y));;
        if(x==0 && y==0)
        {
            cout<<0<<endl;
            continue;
        } 
        else if(sq *sq ==((x*x)+(y*y)))
        {
            cout<<1<<endl;
            continue;
        }
        cout<<2<<endl;
    }
}
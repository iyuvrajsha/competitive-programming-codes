#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int y=k-n;
    for(int i=0,j=1;i<n;i++)
    {
        cout<<j<<" ";
        if(y>1)
        {
            j++;
            y--;
        }
         else if(y==1)
        {
           j--; 
            y--;
        }
    }cout<<endl;
}

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,pos1,posN;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                pos1=i;
            }
            if(a[i]==n)
            {
                posN=i;
            }
        }
        int moves;
        if(pos1>posN)
        {
moves = pos1+((n-1)-posN) -1;
        }
        else{
            moves = pos1+((n-1)-posN);
        }
cout<<moves<<endl;
    }
}
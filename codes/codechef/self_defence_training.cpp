#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int ct= 0;
        cin>>n;
        for(int i= 0;i<n;i++)
        { int x;
            cin>>x;
            if(x>=10 && x<= 60)
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
}
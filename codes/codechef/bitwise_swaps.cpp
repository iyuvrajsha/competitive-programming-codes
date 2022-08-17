#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;unordered_map<int,int>;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j] && (a[i]& a [ j ])!=0)
                {
                    swap(a[i],a[j]);
                }
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[j])
            {
                
            }
        }
    }
}
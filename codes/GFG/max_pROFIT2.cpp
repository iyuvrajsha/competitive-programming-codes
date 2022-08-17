#include<bits/stdc++.h>
using namespace std;

int maxProfit(int K, int N, int A[]) {
    vector<int> v; int tp=0,in=0; vector <vector<int>> t; 
    for(int i =in+1; i<N-1;i++)
    {int prof=A[i+1]-A[i];
        for(int j=i+1;i<N-1;i++)
        { if(prof<A[j]-A[i])
            in=j;
            prof= max(prof,A[j]-A[i]);
            
        }
        v.push_back(prof);
    }
    sort(v.begin(),v.end());
    auto it=--v.end();
    while(K--)
    {
            tp+= *it;
            cout<<" tp "<<tp<<endl;
            --it;
    }
     
     return tp;
        }
    

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i= 0 ; i<n;i++)
    {
        cin>>a[i];
    }
    cout<<maxProfit(k,n,a);

}

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int arr[], int n,int k)
{ int N=1e5 +10; vector<int> v;
    int hsh[N]={0};
    for(int i=0;i<n;i++)
    {
        hsh[arr[i]]++;
        if(hsh[arr[i]]> n/k)
        {   v.push_back(arr[i]);
            hsh[arr[i]]= INT_MIN;
            }
    }
    return v;
}

int main()
{
    int n;int k;
    cin>>n>>k;
    int a[n];
    for(int i= 0;i<n;i++)
    {
        cin>>a[i];
    }
auto s= solve(a,n,k);
for(auto j: s)
{
    cout<<j<<" ";
}
}
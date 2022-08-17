#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
    {
        sort(&arr[l],&arr[r+1]);
        return arr[l+(k-1)];
    }

int main()
{int n;
    cin>>n; int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k; cin>>k;
    cout<<kthSmallest(a,0,n,k);
}
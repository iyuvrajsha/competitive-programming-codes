#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
      sort(arr,arr+n);
    int ma= arr[n-1];
    int mi=arr[0];
    int res= ma-mi;

    for(int i=1;i<n;i++)
    {
        ma= max(arr[i-1]+k,arr[n-1]-k);
        mi= min(arr[i]-k,arr[0]+k);
        if(mi>0)
        res= min(res,ma-mi);
    }
return res;

    }

int main()
{
    int n,k;
    cin>>k>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  cout<<getMinDiff(a,n,k);
}
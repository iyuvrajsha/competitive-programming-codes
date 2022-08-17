#include<bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a,a+n); pair<long long,long long> p;
    p.first=a[0];
    p.second=a[n-1];
    return p;
}
int main()
{
    int n;
    cin>>n; long long arr[n];
    for(int i=0;i<n;i++)
    {
cin>>arr[i];
    }
    auto a=getMinMax(arr,n);
    cout<<a.first<<" "<<a.second ;
    
}
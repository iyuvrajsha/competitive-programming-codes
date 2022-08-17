#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
      long long sum=0;  long long max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
       sum=sum + arr[i];
       if(sum>max_sum)
       {
           max_sum=sum;
       }
       if(sum<1)
       sum=0;

    } return max_sum;

    }

int main()
{int n; cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<maxSubarraySum(a,n);

}
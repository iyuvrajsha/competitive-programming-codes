#include<bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n) {
    long long ans = arr[0];
    long long ma= ans,mi = ans;
    long long ll = 1;
    for(int i = 1;i<n;i++)
    {
        if(arr[i]<0)
        {
            swap(ma,mi);
        }
        ma= max((arr[i])*ll, arr[i] * ma);
        mi = min(arr[i]*ll,arr[i] * mi);
        ans= max(ans,ma);
        //cout<<ans<<endl;
    }
    return ans;
	}

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<<maxProduct(a,n);
}
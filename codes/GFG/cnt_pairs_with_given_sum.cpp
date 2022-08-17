#include<bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
     int ct=0;
    unordered_map<int ,int> m;
    for(int i=0;i<n;i++)
    {
        //hsh[arr[i]]++;
        //ct+= hsh[arr[i]]/2;
        if(k-arr[i]>0 ) 

        {
            ct+=m[arr[i]];
            m[k-arr[i]]++;
    
        }
    }
    return ct;
    }

int main()
{int n; int k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<getPairsCount(a,n,k);

    return 0;
}
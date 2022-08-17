#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{  int l= arr[n-1];
    for(int i=n-2;i>=0;i--)
    { 
        arr[i+1]=arr[i];
    }
    arr[0]=l;
}

int main()
{ int n;
cin>>n;  int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

rotate(a,n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}

}
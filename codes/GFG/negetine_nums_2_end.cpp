#include<bits/stdc++.h>
using namespace std;

void segregateElements(int arr[],int n)
    { int j=0,pa[n],na[n],k=0;
        for(int i=0;i<n;i++)
        if(arr[i]>=0)
        {
           pa[j]=arr[i];
           j++;
        }
        else {
            na[k]=arr[i]; k++; }
    for(int i=0;i<j;i++)
    {
        arr[i]=pa[i];
    }
    for(int i=j,z=0;i<(j+k);i++,z++)
    {
        arr[i]=na[z];
    }

}

int main()
{ int n;
    cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
segregateElements(a,n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}
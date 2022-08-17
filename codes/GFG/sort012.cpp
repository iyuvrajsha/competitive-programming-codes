#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{ map<int,int> m;
    for(int i=0;i<n;i++)
    {
      m[a[i]]++;
    } int i=0;
    while(m[0]--)
    {
        a[i]=0;
        i++;
    }  
    while(m[1]--)
    {
        a[i]=1;
        i++;
    }
    while(m[2]--)
    {
        a[i]=2;
        i++;
    }

}

int main()
{
    int n;
    cin>>n; int a[n];
    for(int i=0;i<n;i++)
    {
cin>>a[i]; }
 sort012(a,n);
 for(int i=0;i<n;i++)
    {
cout<<a[i]; }
    
}
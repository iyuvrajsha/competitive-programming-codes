#include<bits/stdc++.h>
using namespace std;
long long ct;
void con(long long a[],int l,int mid,int r)
{
int k=mid-l+1; int m= r-mid;
int b[k],c[m];
for(int i=0;i<k;i++)
{
    b[i]=a[l+i];
}
for(int i=0;i<m;i++)
{
    c[i]=a[mid+1+i];
}
int i=l,j=0,h=0;
while(j<k && h<m)
{
    if(b[j]<=c[h])
    {
        a[i]=b[j];
        j++;
    }
    else
    {
        a[i]=c[h];  ct+=(k-j);
        h++;
        
    }
    i++;
}
while(j<k)
{
    a[i]=b[j];
        j++;
        i++;
}
while(h<m)
{
   a[i]=c[h];
        h++;
        i++; 
}

}

void div(long long a[],int l,int r)
{
  int mid;
  if(l<r)
  { mid=(l+r)/2;
      div(a,l,mid);
      div(a,mid+1,r);
      con(a,l,mid,r);
  }

}

long long int inversionCount(long long arr[], long long N)
{
   div(arr,0,N-1);
    return ct;

}

int main()
{ long long n;
cin>>n;
long long a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<inversionCount(a,n)<<endl;
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}

    return 0;
}
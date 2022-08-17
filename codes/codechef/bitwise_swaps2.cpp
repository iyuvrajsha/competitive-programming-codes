#include<bits/stdc++.h>
using namespace std;

void con(int a[],int l1,int mid, int r)
{ 
    int k=mid-l1+1; int l=r-mid;
  
    int a1[k],b[l]; bool flag =true;
  
for(int i=0;i<k;i++)
{
    a1[i]=a[l1+i];
  
}
for(int i=0;i<l;i++)
{
    b[i]=a[mid+1+i];
}
int i=l1; int j=0,h=0;
while(j<k && h<l)
{

    if(a1[j]<b[h] && a1[j] & b[h] !=0)
    {
     a[i]=a1[j];  
     j++; 
    }
    else if(a1[j]>b[h] && a1[j] & b[h] !=0)
    {a[i]=b[h];
     h++;
    }
    else{
        flag=false;
        break;
    }
    i++; 
}
if(!flag)
{
    cout<<"NO"<<endl;
    
}
else cout<<" 11 "<<endl;
while(j<k)
{
    a[i]=a1[j]; 
    j++;
    i++;
 }

while(h<l)
{  a[i]=b[h]; 
    h++;
    i++; 
}   }

void div(int a[],int l,int r)
{int mid=(l+r)/2;
    if(l<r)
    {  int mid =(l+r)/2;
        div(a,l,mid);
        div(a,mid+1,r);
    con(a,l,mid,r);
    }
}

int main() 
{int t;
cin>>t;
while(t--)
{  int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
div(arr,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";

}

    
}
}



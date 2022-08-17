#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
	  int last=0;
      if(n!=0 && m!=0){
      for(int i=0;i<n;i++)
      { cout<<"arr1 "<<arr1[i]<<" arr2 "<<arr2[last]<<endl;
          if(arr1[i]>arr2[last])
          {
              swap(arr1[i],arr2[last]);
          }
          if(arr2[last]>arr2[last +1]&& last+1!=m)
          {
              swap(arr2[last],arr2[last+1]);
          }
      }
     // sort(arr2,arr2+m);
      }
	}

int main()
{ int n,m;
cin>>n>>m; int arr1[n],arr2[m];
for(int i=0;i<n;i++)
{
    cin>>arr1[i];
}
for(int i=0;i<m;i++)
{
    cin>>arr2[i];
}
merge(arr1,arr2,n,m);

     for(int i=0;i<n;i++)
{
    cout<<arr1[i]<<" ";
}
cout<<endl;
for(int i=0;i<m;i++)
{
    cout<<arr2[i]<<" ";
}
cout<<endl;

    return 0;
}
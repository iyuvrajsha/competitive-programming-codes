#include<bits/stdc++.h>
using namespace std;

	void rearrange(int arr[], int n) {
	    int a[n],b[n]; int j=0,k=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {a[j]=arr[i]; j++;
	        }
	        else
	        {b[k]=arr[i];
	        k++;}
	        
	    }int i=0,x=0,y=0;
	    while(x<j && y<k)
	    {
	        arr[i]=b[y];i++; y++;
	        arr[i]=a[x];i++;x++;
	        
	    }
	    while(y<k)
	    {
	       arr[i]=b[y];i++; y++; 
	    }
	     while(x<j)
	    {
	       arr[i]=a[x];i++; x++; 
	    }
	    
	}

    int main()
    {  int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
rearrange(a,n);
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
        return 0;
    }
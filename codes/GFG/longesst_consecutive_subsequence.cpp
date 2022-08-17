#include<bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
    {
        sort(arr,arr+N); int c=1,mc=1;
      for(int i= 0;i< N-1; i++)
      {
          if(arr[i]==arr[i+1] - 1)
        {
            c++;
            mc= max(mc,c);
        }
        else if(arr[i]== arr[i+1])
        {
            continue;
        }

        else
        {
            c=1;
        }
      }
      return mc;
    }

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
cout<<findLongestConseqSubseq(a,n);
}
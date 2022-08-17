#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,steps=0;
    cin>>n; int h[n];

    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    int maxx= h[0],minn=h[n-1],mp=0,mip=n-1;
    for(int i=1;i<n;i++)
    {
      if(h[i]>maxx)
      {
          mp=i;
      maxx=h[i];
      } //cout<<" "<<h[i]<<" m "<<maxx<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
       if(h[i]<minn)
     {mip=i; minn=h[i];
      }
    }
    int temp;
    for(int i=mp;i>0;i--)
    { //swap(h[i],h[i-1]);
    temp= h[i-1];
      h[i-1]=h[i];
      h[i]=temp; 
     steps++;}

     for(int i=mip;i<n-1;i++)
    { //swap(h[i],h[i+1]);
      temp= h[i+1];
      h[i+1]=h[i];
      h[i]=temp; 
     steps++;}
       if(mp>mip)
    cout<<steps-1;
    else cout<<steps;

}
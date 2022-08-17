#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
  cin>>n;  int dist[100]; int a=0;
  dist[0]=-1;
  for(int i=1;i<=n;i++)
  {
    dist[i]=i;

  }
  for(int i=1;i<=n;i+=2)
  {  swap(dist[i],dist[i+1]);


  }
  for(int i=1;i<=n;i++)
  {  if(n!=1)
      cout<<dist[i]<<" ";
      else
      cout<<-1;


  }
  


    return 0;
}
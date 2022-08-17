#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    long long s[n]; vector <int> oi,ei; int steps=0;
    for(int i=0;i<n;i++)
    {int x;
        cin>>x; s[i]=x%2;
    }
if(s[0]==1)
{ for(int i=1;i<n-1;i++)
    {  if(s[i]==1 && s[i+1]==1)
       { steps++;
       s[i+1]=0;}
       if(s[i]==0 && s[i+1]==0)
       {
           steps++; 
           s[i+1]=1;
       }       
    }
}
else{
     for(int i=1;i<n-1;i++)
    {  if(s[i]==1 && s[i+1]==1)
       { steps++;
       s[i+1]=0;}

}
    

}

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ int n,x,y;
  cin>>n>>x>>y;  int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
       
    } bool flag= true;
    for(int i=0;i<n;i++)
    {
    if(b[i] - a[i] != x && b[i]- a[i] != y)
    {
        flag= false;
        break;
    }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    


}

    return 0;
}
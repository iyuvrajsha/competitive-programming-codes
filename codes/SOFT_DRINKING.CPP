#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;

 int t_slice=c*d;
 int t_ml= k*l,t=0;
 while(true)
 {
     t_ml-=nl;
     if(t_ml<0)
     break;
     p-=np;
     if(p<0)
     break;
     t_slice--;
     if(t_slice<0)
     break;
     t++;

 }
 cout<<t/n;

    return 0;
}
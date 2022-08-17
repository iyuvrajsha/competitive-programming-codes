#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n!= 2)
       {    if(n%2!=0)
       {
           
            for(int i= n;i>0; i--)
{
    cout<<i<<" ";
}
cout<<endl;
       }
       else 
       { int i;
       for(i= 1;i<=(n)-3;i++)
       {
           cout<<i<<" ";
       } i--;
      cout<<i+3<<" "<<i+1<<" "<<i+2<<endl; 
       }
       }
       else 
       cout<< -1<<endl;
    }
}
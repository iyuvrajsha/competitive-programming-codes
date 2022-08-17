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
        long long a[n]; int c2=0,c0=0;
        unordered_map<int,int> s; bool f1=false,f2=false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           
        } long long np=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]==1 &&!f1)
            {
                np+=(n-1); f1=true;
            }
            if(a[i]==2 && !f2)
            {  np+= c2;
              if(c2>0)
              {
                  f2=true;
              }
                c2++; 
            }

        }
        
        

        cout<<np<<endl;

    }
}
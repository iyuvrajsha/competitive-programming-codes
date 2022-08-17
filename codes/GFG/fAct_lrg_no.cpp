#include<bits/stdc++.h>
using namespace std;

vector<int> factorial(int N){
        vector<int> v;        
        v.push_back(1);
        for(int i=2;i<=N;i++)
        { long long c=0; vector<int> t;
            for(auto it=--v.end();it>=v.begin();it--)
         
         { long long y=  (i * (*(it))) +c ;
            
          t.push_back( y % 10);
          
            c= y/10;
            //cout<<" i "<<i<<" y "<<y<<" c "<<c<<" *it "<<*it<<endl;
         }
        //cout<<8;
        while(c >0)
        {  //cout<<1;
            t.push_back((c%10));
            c/=10;
        }//cout<<9;
        reverse(t.begin(),t.end());
         v=t;
        }
        
        return v;
    }

int main()
{ int n;
cin>>n; 
auto x= factorial(n);

for(auto a: x)
{
    cout<<a;
}


    return 0;
}
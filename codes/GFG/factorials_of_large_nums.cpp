#include<bits/stdc++.h>
using namespace std;

vector<int> factorial(int N){
        vector<vector<int>> v;
        vector<int > t,t0;
        t0.push_back(0);
        v.push_back(t0);
        t.push_back(1);
        v.push_back(t);
        for(int i=2;i<=N;i++)
        { long long c=0; vector<int> t;
            for(auto it=--v[i-1].end();it>=v[i-1].begin();it--)
         
         { long long y=  (i * (*(it))) +c ;
            
          t.push_back( y % 10);
          
            c= y/10;
         }
         v.push_back(t);
         reverse(v[i].begin(),v[i].end());
         v[i].insert(v[i].begin(),c);
        }
        
        return v[N];
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
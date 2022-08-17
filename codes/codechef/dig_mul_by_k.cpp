#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; long long k,m;   vector<long long> v;  long long N=1e9 +7;
        cin>>n>>k>>m;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            v.push_back(s[i]- '0');
         //cout<<v[i];
        } 
        int l =0;
        while(m--)
        {  vector<long long > te;
            auto f= v.end(); //cout<<1;
            for(auto i=v.begin();i<f;i++)
            {  //cout<<" val "<<*i; 
            // cout<<2;
                *(i)= *(i)  * k;
                //if(*i>=10)
                //cout<<" *i "<<*i<<". ";
                while((*i) >=10  )
                { //cout<<3;
                     long long x= (*(i)) %10;// cout<<" x "<<x<<". ";
                    // cout<<" *i0 "<<*i<<". ";
                    te.push_back(x);  //cout<<5;
                    //cout<<" *i1 "<<*i<<". ";
                    *(i) = (*(i)) / 10;
                    //cout<<" *i2 "<<*i<<". ";
                }    
            }
            for(auto u : te)
            {  
            
            
                v.push_back(u);
            }
            
        }
        cout<<(v.size())%N<<endl;

    }
}
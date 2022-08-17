#include<bits/stdc++.h>
using namespace std;
int main ()
{long long n1;
        
    while(cin>>n1)
    {
        long long mp= n1,ms= n1; vector<long long > v;
    v.push_back(n1); 
    while(true)
    {int sm=0;  vector<long long> temp;
    for(auto it= v.begin();it<v.end();it++)
    {   
       temp.push_back((*it)/2);
       temp.push_back((*it)/3);
       temp.push_back((*it)/4);
       sm+= (*it)/2+(*it)/3+(*it)/4;
    }
    v= temp;
    if(ms<sm)
    {
        ms= sm;
    }
    else{
        break;
    }
    }
    cout<<ms<<endl;
    
}
}
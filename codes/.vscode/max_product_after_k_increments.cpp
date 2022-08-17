#include<bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int>& nums, int k) {
        long long M= 10e9+7;
        set<int> s(nums.begin(),nums.end());
        long long product=1;
        sort(nums.begin(),nums.end());
        auto it = s.begin();
        while (k>0)
        {  it = s.begin();
         cout<<" el "<<*it<<endl;
            if(it != --s.end())
            {
            if((*it)+k <*(++it))
            {it = s.begin();
                int t= *it+k;
                cout<<"t "<<t<<endl;
                k=0;
                s.erase(*it);
                s.insert(t);
            }
            else 
            {it = s.begin();
                int t= ((*(++it))+1);
                //--it;
                cout<<"t "<<t<<endl;
                it = s.begin();
                k-= t- (*it);
                s.erase(*it);
                s.insert(t);
            }
        }
        else 
        {int t= *it+k;
        cout<<" ooo "<<endl;
                s.erase(*it);
                s.insert(t);
        }

        }
        
        for(auto it=s.begin();it!=s.end();it++)
        {       cout<<" ele "<<*it<<endl;
                product= (((*it)%M) * (product%M))%M; 
        }
        return product;
    }
int main()
{ vector<int> v;
v.push_back(9);
v.push_back(7);
v.push_back(8);

cout<<maximumProduct(v , 9);
}
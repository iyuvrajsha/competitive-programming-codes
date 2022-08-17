#include<bits/stdc++.h>
using namespace std;
int largestInteger(int num) {
        vector<bool> ev; 
        vector<int> nme,nmo;
        while(num!=0)
        {
            if((num%10)%2 == 0)
            {ev.push_back(1);
             nme.push_back(num%10);
            }
            else
            {ev.push_back(0);
             nmo.push_back(num%10);
            }
            //nms.push_back(n%10);
            num/=10;
        }
        reverse(ev.begin(),ev.end());
        sort(nme.begin(),nme.end());
        sort(nmo.begin(),nmo.end());
        vector<int> ::iterator e,o;
        if(!nme.empty())
        {
            e= --nme.end();
        }
        if(!nmo.empty())
        {
            o= --nmo.end();
        }
        int ans=0;
        for(auto it= ev.begin();it!=ev.end();it++)
        {
            if(*it)
            {ans=ans*10+ *e;
            e--;
            }
            else
            {ans=ans*10+ *o;
            o--;
            }
        }
        return ans;
        
        
    }
    int main()
    {
        cout<<largestInteger(8);
    }
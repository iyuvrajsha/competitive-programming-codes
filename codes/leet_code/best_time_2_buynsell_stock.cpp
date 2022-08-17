#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int bp=prices[0],sp=prices[1]; int profit=sp-bp;
        for(auto it = prices.begin()+1;it<prices.end();it++)
        {  sp= max(sp,*it);
            profit =max(profit,sp-bp);
            
            if(bp>*it && it!= prices.end()-1)
            {bp= min(bp,*it);
            sp=*(it+1);
            }

        }
        if(profit<0)
        return 0;
        else
        return profit;
    }
int main()
{ int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++)
{ int x;
cin>>x;
    a.push_back(x);
}
cout<<maxProfit(a);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

 vector<vector<int> > stockBuySell(vector<int> A, int n){
        int cp = A[0]; int sp = A[1]; int profit= sp-cp;
        int cpi= 0, spi= 1;vector<int > tt;
        
    tt.push_back(cpi);
     tt.push_back(spi);

        int mp = profit;
        vector<vector<int>> ans;
        ans.push_back(tt);
        for(int i= 1;i<n;i++)
        {vector<int> temp;
            if(A[i]> sp)
            {
                sp= A[i];
                spi =i;
                profit= sp-cp;
                mp= max(profit,mp);
                ans[]
            }
            if(A[i]< cp && i != n-1)
            {  if(profit>0){
             temp. push_back(cpi);
             temp. push_back(spi);   
             ans.push_back(temp);   } 
             cout<<A[i]<<endl;     
                cp = A[i];
                cpi= i;
                sp = A[i+1];
                spi= i+1;  
                profit= sp-cp;
                mp= max(profit,mp);         
            }
            cout<<" ai "<<A[i]<<" sp "<<sp<<" cp "<<cp<<" profit "<<profit<<endl;
            if(i== n-1)
            {
                 temp. push_back(cpi);
             temp. push_back(spi);   
             ans.push_back(temp);
            }
        }
        return ans;
    }

int main()
{
    int n;
    cin>>n;
    vector<int > a;
    for(int i=0; i<n;i++)
    {int x;
        cin>>x;
       a.push_back(x);
        }
   auto ans=stockBuySell(a,n);

   for(auto ann: ans)
   {
       for(auto tb : ann)
       {
           cout<<tb<<" ";
       }
       cout<<endl;
   }
}
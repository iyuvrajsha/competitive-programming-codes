#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    for(auto j= nums.end()-2;j>=nums.begin();j--)
    for(auto i =--nums.end();i>j;i--)
    {
        
            if(*i > *j)
            {
                swap(*i,*j);
                sort(j+1,nums.end());
                return;
            }

    }
 
   sort(nums.begin(),nums.end());
        
    }

int main()
{ int n;
cin>>n; vector<int> v;
for(int i=0;i<n;i++)
{ int x;
    cin>>x;
    v.push_back(x);

}
nextPermutation(v);

for(auto aa: v)
{
    cout<<aa<<" ";
}

    return 0;
}
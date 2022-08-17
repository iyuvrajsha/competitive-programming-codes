#include<bits/stdc++.h>
using namespace std;

vector<int> f(vector<int> nums,int target)
{
    unordered_map<int,int> m;
    bool flag[nums.size()];
    vector<int> ans;
    for(int i=0;i<nums.size();i++)
    {
        m[nums[i]]=i+1;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(m[target-nums[i]]!=0 && m[target-nums[i]]!=i+1)
        {
            ans.push_back(m[target-nums[i]]-1);
            ans.push_back(i);
            sort(ans.begin(),ans.end());
            return ans;
        }
    }
    }
int main()
{
    vector<int> v;
    int target,n;
    cin>>n>>target;
    for(int i=0;i<n;i++)
    {int x;
        cin>>x;
        v.push_back(x);
    }
    auto ans= f(v,target);
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
}
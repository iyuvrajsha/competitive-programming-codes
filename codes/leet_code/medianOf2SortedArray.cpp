#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        auto i=nums1.begin(),j=nums2.begin();
        double ans;
        vector<int> v;
        while(i<nums1.end() && j<nums2.end())
        {
            if(*i<=*j)
            {
                v.push_back(*i);
                i+=1;
            }
            else
            {
                v.push_back(*j);
                j+=1;
            }
            
        }
        while(i<nums1.end())
        {
                v.push_back(*i);
                i+=1;
            
        }
        while(j<nums2.end())
        {
                v.push_back(*j);
                j+=1;
            
        }
        // for(int x=0;x<v.size();x+=1)
        // {
        //     cout<<v[x]<<" val"<<endl;;
        // }
        if(v.size()%2==0)
        {
            cout<<float(v[v.size()/2]+v[v.size()/2 -1])/2<<"ans"<<endl;;
            ans = (v[v.size()/2]+v[v.size()/2 -1])/2;
        }
        else
        {
            ans = v[v.size()/2];
        }

        return ans;
    }

int main()
{
    vector<int> v1,v2;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    cout<<setprecision(12)<<findMedianSortedArrays(v1,v2);
}
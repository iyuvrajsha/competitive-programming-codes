#include<bits/stdc++.h>
using namespace std;


 int findDuplicate(vector<int>& nums) {
     int d; int arr[100000+10]={0};
        for(auto a: nums)
        {
             arr[a]++;
             if(arr[a]==2)
             {
                 d=a;
                 break;
             }

        }
        return d;
    }

int main()
{
vector<int> n; int nn;
cin>>nn;
for(int i=0;i<nn;i++ )
{int x;
    cin>>x;
    n.push_back(x);
}
cout<<findDuplicate(n);
    return 0;
}

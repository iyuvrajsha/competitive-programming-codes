#include<bits/stdc++.h>
using namespace std;
bool isps(long long x)
{ long long sq= sqrt(x);
    return sq*sq == x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int n;
            cin>>n; long long ans=0;
            vector<long long> a;
            unordered_map<long,long> m;
        for(int i=0;i<n;i++)
        { long long x;
            cin>>x;
            if(!isps(x))
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {   for(int j=2;j<=a[i];j++)
            {
                if(isps(j*a[i]))
                {
                    if(m[j]==0)
                    {
                        ans++;
                        m[j]++;
                    }
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    }
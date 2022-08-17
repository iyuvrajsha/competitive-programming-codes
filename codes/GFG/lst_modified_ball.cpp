#include<bits/stdc++.h>
using namespace std;

    int solve(int N, vector<int> A) { 
        int p=N;
        for(auto it= --A.end();it>=A.begin();it--)
        {
            (*it)+=1;
            if((*it)>9)
            {
                *it=0;
                p--;
            }
            else{
                break;
            }
        }
        return p;
    }

int main()
{ int n;
cin>>n;
vector<int > a;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    a.push_back(x);
}
cout<<solve(n,a);

    return 0;
}
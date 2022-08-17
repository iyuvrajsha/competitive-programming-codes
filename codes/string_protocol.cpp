#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            string s;
            cin>>n>>s;
            long long tm=0;
            for(int i=0;i<n;i++)
            {   if(i!= n-1)
                if(s[i]== s[i+1])
                {
                    tm++;
                    i++;
                    continue;
                }
                tm++;
            }
            cout<<tm<<endl;
        }
    }

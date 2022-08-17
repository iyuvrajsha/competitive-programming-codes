#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--)
    {
        int N;
        cin>>N;
        unordered_map<int,int> P;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;

            P[x]++;
        } 
        string myAnswer= "YES";
        for(auto pairs :P)
        {
            if(pairs.first!=pairs.second)
            {
                myAnswer="NO";
                break;
            }
        }
        cout<<myAnswer<<endl;
    }
}
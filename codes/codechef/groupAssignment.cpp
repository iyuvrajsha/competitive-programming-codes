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
        int count1=0;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                count1++;
            }
            P[x]++;
        } 
        string myAnswer= "YES";
        for(auto pairs :P)
        {
            if(pairs.second%pairs.first !=0)
            {
                myAnswer="NO";
                break;
            }
        }
        cout<<myAnswer<<endl;
    }
}
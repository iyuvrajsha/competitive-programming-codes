#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--)
    {
        int X,Y;
        cin>>X>>Y;
        if(X>=Y)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<Y-X<<endl;
    }
}
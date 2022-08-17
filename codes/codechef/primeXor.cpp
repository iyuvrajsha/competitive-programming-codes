#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--)
    {
        int a,b,c,x,y,z;
        vector<int> v;
        cin>>x>>y;
        z= x^y;
        if(x%2!=0 && y%2!=0)
        {
            b=2;
            a= x^b;
            c= y^b;
        }
        else if(z%2!=0 && y%2!=0)
        {
            c=2;
            a= z^c;
            b= y^c;
        }
        else if(x%2!=0 && z%2!=0)
        {
            a=2;
            b= x^a;
            c= z^a;
        }
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        for(auto value:v)
        cout<<value<<" ";
        cout<<endl;
    }
}
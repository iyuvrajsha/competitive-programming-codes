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
        string s;
        cin>>s;
        int cont1=0,cont0=0;
    bool one=false,zero=false;
        for(int i =0;i<N;i++)
        {
            if(s[i]=='1')
            {
                one=true;
            }
            else if(one && s[i]=='0')
            {
                cont1++;
                one=false;
                zero=true;
            }
        }
        cout<<cont1<<endl;

    }
}
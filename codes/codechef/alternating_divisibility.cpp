#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int st= n;
        for(int i =0;i<n;i++)
        {           if(i%2== 0)
                cout<<st<<" ";
                else
               { cout<<st*2<<" ";
                st--;}

        }
        cout<<endl;
    }
}
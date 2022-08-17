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
        int h= 8;
        for(int i =0; i<n;i++)
        {
                int x;
                cin>>x;
                if(x>5)
                {
                if(x%7 == 0 || x%7 == 6)
            {
                continue;
                
            } 
            else 
            h++;
            }
            else 
            h++;
        }
        cout<<h<<endl;
    }
}

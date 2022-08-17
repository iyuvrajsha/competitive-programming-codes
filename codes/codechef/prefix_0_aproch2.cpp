#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s; int nu=0;
    for(int i=0;i<n;i++)
    {
        int x= s[i]- '0';
        
        if(x+k>=10 ||x== 0)
        {
                nu++;
        }
        else{
            break;
        }
    }
    cout<<nu<<endl;
}

    return 0;
}
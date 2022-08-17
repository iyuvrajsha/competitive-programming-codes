#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n,k,m;
    cin>>n>>k>>m;  vector<int > wb;
    string s;
    cin>>s;
    while(m--)
    {
    n=s.size();
   for(int i=0;i<n;i++)
    { cout<<" s[i] "<<s[i];
        int x= (s[i] - '0'); cout<<" s[i] "<<s[i];
       // s.erase((s[i])); 
        cout<<" y ";
        s+= ((x*k) + '0');

}
    }


    
     cout<<s.size()<<endl;
}

    return 0;
}
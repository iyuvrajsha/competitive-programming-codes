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
        cin>>n>>s;int o=0;
        vector<int> v1,v2;
        for(int i=0;i<n;i++)
        {  
            if((s[i]=='1' && o%2== 0) || (s[i]== '0' && o%2 !=0)) 
            { o++;
            //cout<<" st "<<s<<endl;
            v1.push_back(i+1);
            v2.push_back(n-i);
            }
        }
        cout<<v1.size()<<endl;
        for(auto i1=v1.begin(),i2= v2.begin();i1<v1.end();i1++,i2++)
        {
            cout<<*i1<<" "<<*i2<<endl;
        }
    }
}
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
        string a,b;
        char c[2*n];
        cin>>a>>b;
        multiset<char> m,l; 
       // cout<<0<<endl;
        for(int i=0;i<n;i++)
        {
            m.insert(a[i]);
            l.insert(b[i]);
        } 
        //cout<<1;
        auto it1 =m.begin();
        auto it2 = --l.end();
        int i=0;
        while(i<2*n && *it1<*it2)
        {
            c[i]= *it1;
            i++; it1++;
            if(*it1>*it2)
            break;
            c[i]= *it2;
            i++;
            
            it2--;
        } //cout<<i<<endl;
       int k=(n*2)-1;
        it1=--m.end();
        it2= l.begin();
        while(i<2*n)
        { if(i%2== 0)
            {c[k]= *it1;
            --k; i++;
            --it1;}
            else{
                c[k]= *it2;
                k--; i++;
                ++it2;
            }

        }
        for(int i=0;i<2*n;i++)
        {
            cout<<c[i];
        }
        cout<<endl;
    }
}
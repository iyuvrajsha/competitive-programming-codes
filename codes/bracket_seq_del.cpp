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
        cin>>n>>s;
        vector<char> st;
        int o=0,r=0; bool fl=false; bool p=false; int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]== '(')
            {
                st.push_back('(');
            }
            if(s[i]== ')'&& !st.empty())
            {
                st.erase(st.end()-1);
                if(st.empty())
                {o++;
                    pos= i+1;  }              
            }
            else if(s[i]== ')'&& st.empty())
            {
                fl=true;
                break;
            }
        }int sta=0;
        if(o!=0)
        {
            sta= pos;
            //cout<<" oh"<<" sta "<<sta <<endl;
        } //cout<<" ini sta "<<sta<<endl;
        for(int i=sta+1;i<n;i++)
        {
            if(s[sta]==s[i])
            {
                sta=i+1;
                o++;
                i++;
            }
        } 
        /*if(sta==-1)
        {
sta=n+1;
        }*/ //cout<<"aft sta "<<sta<<endl;
        r= n-(sta);
        
cout<<o<<" "<<r<<endl;
    }
}
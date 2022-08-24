#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    unordered_map<string,int> m;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                m[s.substr(i,j+1)]++;
            }
        }
        
    int ans=0;
    string anss;
        for(auto i:m)
        { cout<<"the string "<<i.first<<endl;
            int len=0;
            int q =0,r=i.first.size()-1;
            bool flag=true;
                if(ans==0 && i.first.size()==1)
                {
                    ans=1;
                    anss=i.first;
                }
                ans=max(ans,int(i.first.size()));
            for(;q<r;q++,r--)
            {  
                if((i.first)[q]== (i.first)[r])
                {
                    continue;
                }
                else
                { flag=false;
                    break;
                }
            }
            if(ans==i.first.size() && flag)
                    {
                        anss= i.first;
                        cout<<anss<<" yo "<<endl;
                    }
            
        }
    return anss;
    }
int main()
{
string s;
cin>>s;
cout<<longestPalindrome(s);
}
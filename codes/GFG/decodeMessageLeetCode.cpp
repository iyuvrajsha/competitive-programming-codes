#include<bits/stdc++.h>
using namespace std;

string decodeMessage(string key, string message) {
        auto value= 'a';
        unordered_map<char,char> code;
        //cout<<1<<endl;
        for(int i =0;i< key.size();i++)
        { if(key[i]!= ' ')
        {
            code[key[i]] =  value;
            value=value + 'b' -'a';
        }
        else
        {
            code.insert({key[i], ' '});
        }
        }
        

        
        string ans;
        for(int i = 0;i<message.size();i++)
        {   //cout<<message[i]<<" key- "<<code[message[i]]<<endl;
            ans.push_back(code[message[i]]);
        }
        //cout<<3<<endl;
        return ans;
    }
//"the quick brown fox jumps over the lazy dog"
//"vkbs bs t suepuv"

int main()
{
string s,m;
cin>>s>>m;
cout<<decodeMessage(s,m);
}
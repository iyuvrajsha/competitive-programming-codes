#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    long long s[n],s2[n]; map<int,long long> oi,oi2; int steps=0,steps2=0; vector<pair<int ,int>> p,p2; bool flag=false,flag2=false;
    for(int i=0;i<n;i++)
    {int x;
        cin>>x; s[i]=x;
        s2[i]=x;
    } //cout<<1;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]%2!=0)
        {
            oi[i]=s[i];
        }
    } //cout<<2;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]%2==0 && s[i+1]%2==0 && oi.end()!=oi.begin())
        { auto y = (*oi.begin()).second;  //cout<<89<<endl;
            s[i+1]= s[i+1] ^ y;
            
            steps++;
            pair<int ,int> temp;
            temp.first=i+1;
            temp.second =(*oi.begin()).first;
            oi[i]=s[i+1];
            p.push_back(temp);
            
        }
        else if(s[i]%2==0 && s[i+1]%2==0 && oi.end()==oi.begin())
        {  flag=true;
            break;
            steps= INT_MAX;
        }
        if(s[i]%2 !=0 && s[i+1]%2 !=0)
        { //cout<<" dusri loop - s[i]"<<s[i]<<" s[i+1] "<<s[i+1]<<endl;
             //cout<<"ss"<<endl;
            s[i+1]= s[i+1]^s[i];
            steps++;
            pair<int ,int> temp;
            temp.first=i+1;
            temp.second=i;
            p.push_back(temp);
            oi.erase(i+1);
        }
    }
    //last se wala:-
    for(int i=n-1;i>=0;i--)
    {
        if(s2[i]%2!=0)
        { //cout<<" o "<<endl;
            oi2[i]=s2[i];
        }
    } //cout<<2;
    for(int i=n-1;i>0;i--)
    { // cout<<" lst "<<endl;
    //cout<<" dusri loop - s2[i]"<<s2[i]<<" s2[i-1] "<<s2[i-1]<<endl;

        if(s2[i]%2==0 && s2[i-1]%2==0 && oi2.end()!=oi2.begin())
        { auto y = (*oi2.begin()).second;  //cout<<" y "<<endl; 
            s2[i-1]= s2[i-1] ^ y;
            
            steps2++;
            pair<int ,int> temp;
            temp.first=i-1;
            temp.second =(*oi2.begin()).first;
            oi2[i]=s2[i-1];
            p2.push_back(temp);
            
        }
        else if(s2[i]%2==0 && s2[i-1]%2==0 && oi2.end()==oi2.begin())
        {  flag2=true;
            break;
            steps2=INT_MAX;
        }
        if(s2[i]%2 !=0 && s2[i-1]%2 !=0)
        {// cout<<" dusri loop - s2[i]"<<s2[i]<<" s2[i-1] "<<s2[i-1]<<endl;
             //cout<<"ss"<<endl;
            s2[i-1]= s2[i-1]^s2[i];
            steps2++;
            pair<int ,int> temp;
            temp.first=i-1;
            temp.second=i;
            p2.push_back(temp);
            oi2.erase(i-1);
        }
    }
    if(flag && flag2)
    {
        cout<<-1<<endl;
        continue;
    }
    if((steps < steps2) && !flag)
    {
        cout<<steps<<endl;
        for(auto aa:p)
        {
            cout<<aa.first+1<<" "<<aa.second+1<<endl;
        }
    }
    else if((steps >= steps2) && !flag2){
         cout<<steps2<<endl;
        for(auto aa:p2)
        {
            cout<<aa.second+1<<" "<<aa.first+1<<endl;
        }

    }

    

}

    return 0;
}
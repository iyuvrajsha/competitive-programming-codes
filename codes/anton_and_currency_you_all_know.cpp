#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    char me; int p=-1;
    for(int i= 0;i<n.size()-1;i++)
    {
        if((n[i]-'0')%2==0 && n[i]-'0' < n[n.size()-1]-'0')
        {
            swap(n[i],n[n.size()-1]);
            break;
        }
        else if((n[i]-'0')%2==0)
        {
            p=i;
            //cout<<" ni "<<n[i]<<endl;
        }
    }
    if((n[n.size()-1]- '0')%2!=0 && p!=-1)
    { //cout<<" y "<<endl;
        swap(n[p],n[n.size()-1]);
        cout<<n<<endl;
    }
    else if((n[n.size()-1]- '0')%2!=0 )
    {
        cout<<-1<<endl;
    }
    else cout<<n<<endl;
}
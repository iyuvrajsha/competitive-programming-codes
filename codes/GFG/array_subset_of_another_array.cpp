#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    int hsh[100000]= {0};
    for(int i= 0;i<n;i++)
    {
        hsh[a1[i]]++;
    }
    bool flag= true;
    for(int i =0;i<m;i++)
    {
        if(hsh[a2[i]]>0)
        {  hsh[a2[i]]--;
        continue;
        }

        else 
        {
            flag= false;
            break;
        }
    } string ans;
    if(flag)
    ans= "Yes";
    else
    ans= "No";

    return ans;
}

int main()
{

    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
cout<<isSubset(a,b,n,m);    

}
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if((n % 3)!= 1)
    {
        for(int i= 0,s= 0; s<n; i++)
        {  if(i%2== 0)
            {
                cout<<2;
                s+=2;
            }
            else 
            {cout<<1;
                s++;
            }     
        }
    }
    else 
    for(int i= 0,s= 0; s<n; i++)
        {  if(i%2== 0)
            {
                cout<<1;
                s++;
            }
            else 
            {cout<<2;
                s+=2;
            }     
        }
     cout<<endl;   
}

}
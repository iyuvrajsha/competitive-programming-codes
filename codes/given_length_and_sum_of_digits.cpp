#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    cin>>m>>s; string sm,smi; int s1=s;
    if(s>9*m || (s==0 && m!=1))
    {
        cout<<"-1 -1"<<endl;
    }
    else if(m==1 && s== 0)
    {
        cout<<"0 0"<<endl;
    }
    else 
    { int i=9,j=0;
        while(j<m)
        {
            if(i<=s)
            {
                sm.append(to_string(i));
                j++;
                s-=i;
            }
            else 
            {
                i--;
            }
        } int l=-1;
       for(int i=sm.size()-1;i>= 0;i--)
       {
           if(sm[i]=='0' && i==sm.size()-1 )
           {
               smi.append(to_string(1));
               continue;
           }
           else if(i==sm.size()-1) l=0;
           if(sm[i]!='0' && l==-1 && i!=sm.size()-1)
           {
               smi.push_back(( (sm[i])- 1 ) );
               l=0;
               continue;
           }
           smi.push_back((sm[i]));
       }
       /*if(l!=sm.size()-1 && l!=-1)
       {
           smi[(m-1)-l]= smi[(m-1)-l] -'1';
       }*/
 cout<<smi<<" "<<sm<<endl;
    }
    //cout<<smi<<" "<<sm<<endl;
}
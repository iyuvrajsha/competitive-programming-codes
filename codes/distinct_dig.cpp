#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0, n;
    cin>>n; 
    
    for(int i= n+1;i<9999;i++)
    {  map<int,int> s;
       s[(i%10)]++;
        s[((i/10)%10)]++; 
        s[((i/100)%10)]++;
         s[((i/1000)%10)]++;

         //for(auto f:s)
         //{cout<<"    "<<f;}
       if(s[i%10]==1 && s[((i/10)%10)] ==1 && s[((i/100)%10)]==1 && s[((i/1000)%10)]== 1)
       {
           a=i;
           break;

       }


    }
     cout<<a;
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    double ans= n;  

   ans= pow((ans*0.143),n);
   int an= ans;
   if(float(ans)-an > float(an+1)- ans)
   {
       an++;
   }
   cout<<an<<endl;

}

    return 0;
}
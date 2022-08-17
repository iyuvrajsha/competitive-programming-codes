#include<bits/stdc++.h>
using namespace std;

string minimizeResult(string expression) {
        long long ans=INT_MAX;
    long long n1=0,n2=0;
    long long *tb= &n1;
    for(int i=0;i<expression.size();i++)
    {
        if(expression[i]== '+')
        {
            tb= &n2;
            continue;
        }
        *tb = *tb*10 + (expression[i] -'0');
    } string sm1,sa1,sa2,sm2;
    ans= n1+n2; long long d1=1;
    while(n1/d1!=0)
    { long long ad= n1%d1,mu,d2=1;
    int ad2= n2%d2, mu2= n2/d2;
    if(d1==1 )
    {mu=1;
    ad=n1;}
    else mu = n1/d1;
        while(n2/d2!=0)
        {
            mu2= n2%d2, ad2= n2/d2;
             //cout<<"mu1 "<<mu<<" a1 "<<ad<<" ad2 "<<ad2<<" mu2 "<<mu2<<endl;
             if(d2==1)
             {mu2=1;
             ad2=n2;}
             cout<<"mu1 "<<mu<<" a1 "<<ad<<" ad2 "<<ad2<<" mu2 "<<mu2<<endl;
            ans= min(ans, mu *(ad+ad2)* mu2);
            if(ans== mu *(ad+ad2)* mu2)
            { //cout<<"mu1 "<<mu<<" a1 "<<ad<<" a d2 "<<ad2<<" mu2 "<<mu2<<endl;
            sm1="";sa1="";sa2="";sm2="";
                if(ad!=n1)
                sm1= to_string(mu);
                if(ad2!=n2)
                sm2= to_string(mu2);
                sa1= to_string(ad);
                sa2= to_string(ad2);
            }
            d2*=10;
        }
        d1*=10;
    } //cout<<to_string(1234456)<<endl;;
  string sans= sm1 +'('+ sa1 + "+" + sa2 +')'+ sm2; 
  return sans;
    }
int main()
{
 cout<<minimizeResult("12+34");
}
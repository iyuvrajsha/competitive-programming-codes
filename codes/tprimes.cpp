#include<bits/stdc++.h>
using namespace std;
long long N=1e6+10;
vector<bool> isPrime(N,1);
int main()
{
    int n;
    cin>>n;
isPrime[0]=isPrime[1] =0;
for(int i=2;i<N;i++){
    if(isPrime[i])
    {for(int j=2*i ; j<N;j+=i)
    {
        isPrime[j]=0;
    }
    }
}
long long x[n];
for(int i=0;i<n;i++)
{
    
    cin>>x[i];
}
for(int i=0;i<n;i++)
{
    long long sq= sqrt(x[i]);
        if(isPrime[sq] && sq*sq== x[i])
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    
}


}
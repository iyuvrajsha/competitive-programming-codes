#include<bits/stdc++.h>
using namespace std;
long long N= 1e7+10;
vector<bool> isPrime( N, 1);
int main()
{ isPrime[0]=isPrime[1] =0;
for(int i=2;i<N;i++){
    if(isPrime[i])
    {for(int j=2*i ; j<N;j+=i)
    {
        isPrime[j]=0;
    }

    }
}
for(int i= 1;i<100;i++)
{
    cout<<i<<" "<<isPrime[i]<<endl;
}
}
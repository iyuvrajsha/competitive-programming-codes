#include<bits/stdc++.h>
using namespace std;

int maxProfit(int K, int N, int A[]) {
    int tp=0;
    while(K--)
    {int cp = A[0],sp= A[1] , profit=sp- cp, mp=profit, ci=0,si=1; 
        bool flag[1000+1]={0};
        for(int i= 1;i<N;i++)
        { if(flag[i])
        {
            continue;
        }
            if(A[i]>sp)
            si=i;
            sp= max(sp,A[i]);
            
            profit= sp- cp;
            mp=max(mp, profit); 
            if(A[i]< cp && i !=N-1)
            {
            cp= A[i];
            sp=A[i+1];
            ci=i;
            si=i+1;
            }
        }
        flag[ci]=true;
        flag[si]=true;
        tp+=mp;
     } return tp;
        }
    

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i= 0 ; i<n;i++)
    {
        cin>>a[i];
    }
    cout<<maxProfit(k,n,a);

}

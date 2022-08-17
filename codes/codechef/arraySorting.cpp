#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--)
    {
        int N;
        cin>>N;
        int unsortedPermutation[N];
        int myAnswer= INT_MAX;
        for(int i=0;i<N;i++)
        {
            cin>>unsortedPermutation[i];
            if(unsortedPermutation[i]!=(i+1))
            {
                if(myAnswer!=INT_MAX)
                    myAnswer=  __gcd(myAnswer,abs(unsortedPermutation[i] - (i+1)) );
                else 
                    myAnswer= abs(unsortedPermutation[i] - (i+1)) ;
            }
        }
        cout<<myAnswer<<endl;
    }
}
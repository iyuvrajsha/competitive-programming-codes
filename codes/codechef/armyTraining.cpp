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
        int soldiersArray[N];
        for(int i =0;i<N;i++)
        {
            cin>>soldiersArray[i];
        }
        long long rating= INT_MIN;
        sort(soldiersArray,soldiersArray+N);
        for(int i=0;i<N;i++)
        { long long attackPower=0,defencePower=0;
            for(int j=0;j<N;j++)
            {
                if(j<=i)
                {
                    defencePower+= 1000 - soldiersArray[j];
                    continue;
                }
                attackPower+=soldiersArray[j];
            }
            if(defencePower==0 ||attackPower==0)
        {
            rating= max(defencePower+attackPower,rating);
        }
        else
        rating = max(attackPower * defencePower,rating);
        //cout<<" r r "<<rating<<endl;
        }
        cout<<rating<<endl;
    }
}
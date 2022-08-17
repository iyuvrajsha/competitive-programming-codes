#include<bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n) {
	    long long pr=1,prn=1; bool ne=false; long long mp=INT_MIN,mpn=INT_MIN;
        for(int i= 0;i<n;i++)
        {
                pr= pr *arr[i];
                prn= prn *arr[i];

                if(pr>mp)
                {
                    mp=pr;
                }
                 if(prn>mpn)
                {
                    mpn=prn;
                }
                if(arr[i]<0)
                {
                    pr=1;
                    

                }
                if(arr[i]==0)
                {
                    pr=1;
                    prn=1;
                }
        }
        return max(mp,mpn);


	}

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<<maxProduct(a,n);
}
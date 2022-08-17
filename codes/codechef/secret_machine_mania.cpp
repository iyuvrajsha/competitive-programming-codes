#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long x,c;
	    cin>>x>>c; long long ans=x;
	    if(pow(pow(x,(1/c)),c)==x)
	    {
	        ans=1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

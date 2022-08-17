#include<bits/stdc++.h>
using namespace std;

int main()
{ int n;
cin>>n;
int a[n]; int nof=0; int ans;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    nof += a[i];
}   n++; int ways= 5;
//cout<<" nof "<<nof<<" n "<<n<<" nof pe n "<<nof%n<<endl;
for(int i=1;i<6;i++)
{
if(nof+i == 1 || (nof+i)%n== 1)
{
 ways--;
}
}
cout<<ways<<endl;



    return 0;
}

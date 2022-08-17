#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; long long k; 
        cin>>n>>k;long long ar=k;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n); long long ng=0;
        for(int i=0;i<n;i++)
        { if(a[i]<=ar)
        {
            ng++;
            ar-=a[i];
        }
        else 
        {  int ad;
        //cout<<float(float(a[i])/2)<<float(int(a[i]/2))<<float(int(a[i]/2)+1 )<<float(float(a[i])/2)<<endl;
        if(float(float(a[i])/2)- float(int((a[i])/2)) >= float(int(a[i]/2)+1 )-float(float(a[i])/2))
        ad= (a[i]/2)+1;
        else 
        ad= a[i]/2;
        //cout<<" ad "<<ad<<endl;
        if(ad<= ar)
        {
            ng++; ar-=a[i];
            }
            break;
    
        }
        if(ar<0)
        {
            break;
        }
        }cout<<ng<<endl;
    }
}
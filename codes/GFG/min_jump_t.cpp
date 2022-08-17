#include<bits/stdc++.h>
using namespace std;


int minJumps(int arr[], int n){
    int kaha_tk=0; int steps=0; int kaha_se=0; int ma=kaha_tk;
if(n==1)
{
    return 0;
}
if(arr[0]==0)
{
    return -1;
}

    for(int i=0;i<n;i++)
    {//cout<<"kaha se "<<kaha_se<<" kaha tk "<<kaha_tk<<" ma "<<ma<<" a[i] "<<arr[i]<<" i "<<i<<" steps "<<steps<<endl;
    if(kaha_se==kaha_tk &&arr[i]==0 && ma==kaha_tk)
    return -1;
     
     if(kaha_tk==kaha_se )
    { if(kaha_tk<ma)
    {
        kaha_tk=ma; steps++;
    }
    else{
        kaha_tk= arr[i]+i;
        kaha_se=i;
        ma=kaha_tk;;
        steps++; 
        }
    }
    else if(arr[i]+i>ma )
    { 
        ma= arr[i]+i;
        
    }
    // cout<<"kaha se "<<kaha_se<<" kaha tk "<<kaha_tk<<" a[i] "<<arr[i]<<" i "<<i<<" steps "<<steps<<endl;
    
kaha_se++;
if(kaha_tk>=n-1)
break;

    }return steps;
   
    }

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<minJumps(a,n);

}

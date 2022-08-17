#include<bits/stdc++.h>
using namespace std;


int minJumps(int arr[], int n){
    int steps=0; int p[n]={0}; int ma=arr[n-2],t[n];
        for(int i=n-2;i>=0;i--)
        {      
            cout<<" "<<arr[i]<<" ";
            if(arr[i]==0)
             {
                    p[i]=-1;
                }
                else
              {  if(arr[i]>=(n-1)-i)
                {
                    p[i]=1;
                }
                else{  
                    if(p[i+arr[i]]==-1 && p[i+1] !=-1)
                    p[i]=p[i+1] +1;
                    else if(p[i+1] ==-1 && p[i+arr[i]]!=-1)
                    p[i] = p[i+arr[i]]+1;
                    else if(p[i+1] ==-1 && p[i+arr[i]]==-1)
                    p[i]=-1;
                    else
                    p[i]=min(p[i+arr[i]]+1,p[i+1]+1);

                    if(arr[i]>=ma)
           {
                t[i]=0;
                
           }
           else
           {
               t[i]=t[i+1]+1;
           }
                   
                }
                }
                
                cout<<" "<<p[i]<<endl;
        }
        int i=0;
       while(i<n-1)
       {  if(arr[i]>=t[i])
       {
           i=i+t[i];
           steps=1+p[i];
           break;
       }
       else{
           i=i+arr[i];
           steps++;

       }
    
if(i>=n-1)
break;


       }
       return steps;
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

#include<bits/stdc++.h>
using namespace std;

int minimumSum(int num) {
        int arr[4],sum=0;
        arr[0]= num% 10;
        arr[1]= (num/10)% 10;
        arr[2]= (num/100)% 10;
        arr[3]= (num/1000)% 10;
        sum= (arr[0] * 10 +arr[1]) + (arr[2] * 10) + arr[3];
      for(int i=0;i<4;i++)
      {
          for(int j=0;j<4;j++)
          {
              //sum=min(sum,(arr[i])*10+ arr[j]+ arr[])
          }
      }
    }

int main()
{
    int n;
    cin>>n;
    minimumSum(n);
}
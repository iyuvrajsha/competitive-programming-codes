#include<bits/stdc++.h>
using namespace std;

int yess(long long a,long b, long long n  )
{long long pa=n; long long o_a=a;
while(n>0){bool flag=false;
      for(int i=1;i<10;i++)
  { 
      if(((a*10)+i)%b==0)
      {  //cout<<a;
          a= (a*10)+i; pa--;
        n--; flag=true;
     }
  }if(!flag&& a==o_a)
  return -1;
  else if(!flag)
  i=-1;
  // cout<<a<<' '<<n<<' '<<endl;
}
  if(n!=pa)
  {
      return -1;
  }
  else return a;

  
  return a;


}


int main()
{  long long a,b,n;
cin>>a>>b>>n;
cout<<yess(a,b,n);

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge1(vector<vector<int>>& intervals)
 {
 vector<vector<int>> yu;
 sort(intervals.begin(),intervals.end());
   //cout<<1; 
   int n= intervals.size();   int l=intervals[0][0],r =intervals[0][1];
   for(int i=1;i<intervals.size();i++)
   { 

if(intervals[i][0]<=r)
{
    r=max(intervals[i][1],r);
}

else{
     int x=l; int y=r;
 vector<int> t;  t.push_back(x); t.push_back(y);
yu.push_back(t);
l=intervals[i][0];
r=intervals[i][1];
}
  }
 int x=l; int y=r;
 vector<int> t;  t.push_back(x); t.push_back(y);
yu.push_back(t);
 
return yu;
}

    int main()
    {
        int n; cin>>n;
        vector<vector<int>> v,ge;
        for(int i=0;i<n;i++)
        { int x,y;
        cin>>x>>y; vector<int> t;
        t.push_back(x); t.push_back(y);
        v.push_back(t); }


ge=merge1(v);  
for(int i=0;i<ge.size();i++)
{ //cout<<89;
    cout<<"["<<ge[i][0]<<","<<ge[i][1]<<"]"<<endl;
}


        return 0;
    }


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge1(vector<vector<int>>& intervals)
 {
 vector<vector<int>> yu;
   cout<<1; int n= intervals.size();
   for(int i=0;i<n;i++)
   { cout<<2; 
  
if(intervals[i][1]>intervals[i+1][0])
{ int x=intervals[i][0]; int y=intervals[i+1][1];
 vector<int> t;  t.push_back(x); t.push_back(y);
yu.push_back(t);
i++;
 }

 else{
     int x=intervals[i][0]; int y=intervals[i][1];
 vector<int> t; t.push_back(x); t.push_back(y);
yu.push_back(t);
 }
 cout<<"ii";
  }
 for(int i=0;i<yu.size();i++)
{ cout<<89;
    cout<<"["<<yu[i][0]<<","<<yu[i][1]<<"]"<<endl;
}
cout<<9;
 
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
{ cout<<89;
    cout<<"["<<ge[i][0]<<","<<ge[i][1]<<"]"<<endl;
}


        return 0;
    }


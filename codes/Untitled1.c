#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
 multimap <int,string> m;
    cin>>n;
    for(int i=0; i<n;i++)
    { int x; string y;
     cin>>y>>x;
     m.insert(x,y);

    }
for(auto it= --( m.end());it>=m.begin();it--)
{ auto it2=it;
  while(it2->first()==(*(it2-1)).first() && it2->second>(*(it2-1).second))
    {
       swap(*it2,*(it2+1);
       it2--;
    }
    cout<<(*it).second<<" "<<(*it).first<<endl;
}

    return 0;
}

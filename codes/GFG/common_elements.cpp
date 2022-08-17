#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_map<int,int> u; unordered_map<int,int> y;
            vector<int> v;
            for(int i=0;i<n1;i++)
            { 
                u[A[i]]++;
            }
            for(int i=0;i<n2;i++)
            { int x=u[B[i]];
              if(x>=1)
               y[B[i]]++;                
            }
            for(int i=0;i<n3;i++)
            {
                int x=y[C[i]];
              if(x>=1)
              { if(v.begin()!=v.end())
                    if(*(v.end()-1)!=C[i])
                       v.push_back(C[i]);
                    else ;
                else
                   v.push_back(C[i]);    
              }
            }
           /* for(auto i=v.begin();i<v.end();i++)
            { if(*i == *(i+1))
             {  auto t=i; 
                v.erase(i+1);
                //i--;
             }

            }*/
            if(v.begin()!=v.end())
            return v;
            else
            {
                v.push_back(-1);
                return v;
            }
        }

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++)
    {
            cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
            cin>>b[i];
    }
    for(int i=0;i<n3;i++)
    {
            cin>>c[i];
    }
auto a1= commonElements(a,b,c,n1,n2,n3);

for(auto aa : a1)
{
    cout<<aa<<" ";
}


    return 0;
}
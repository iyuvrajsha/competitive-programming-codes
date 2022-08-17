#include<bits/stdc++.h>
using namespace std;

 string solve(int a, int b, int c) { int n=a+b+c;
     string s; 
     //cout<<" "<<a+b+c<<endl;
        for(int i=0;i<n;i++)
        { //cout<<" i "<<i<<endl;
            if(a>=b && a>=c)
            {s.push_back('a'); a--;
            /*i++; a--;
            if(b>=c)
            {
            s[i]= 'b'; b--;
            i++;
            s[i]= 'c'; c--;
            }

            else{
            s[i]= 'c'; c--;
            i++;
            s[i]= 'b'; b--;
            } */}
        else if(b>=a && b>=c)
            {s.push_back('b');
         b--;/*
            }

            if(a>=c)
            {
            s[i]= 'a'; a--;
            i++;
            s[i]= 'c'; c--;
            }

            else{
            s[i]= 'c'; c--;
            i++;
            s[i]= 'a'; a--;
            }*/ }
        else if(c>=b && c>=a)
           { s.push_back('c');
             c--;/*
            }

            if(b>=a)
            {
            s[i]= 'b'; b--;
            i++;
            s[i]= 'a'; a--;
            }

            else{
            s[i]= 'a'; a--;
            i++;
            s[i]= 'b'; b--;
            }*/ }
            //cout<<" i "<<i<<endl;
        }

        return s;
    }

int main()
{ int a,b,c;
cin>>a>>b>>c;
cout<<solve(a,b,c);

    return 0;
}
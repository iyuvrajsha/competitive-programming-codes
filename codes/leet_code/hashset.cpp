#include<bits/stdc++.h>
using namespace std;
class MyHashSet {
public:
    vector<list<int> > v;
    int siz;
    MyHashSet() {
        int siz= 1000;
        v.resize(siz);
    }
    int hash(int key)
    {
        return key% siz;
    }
    list<int> :: iterator search(int key)
    { auto i= hash(key);
        return find(v[i].begin(),v[i].end(),key);

    }
    
    void add(int key) {
        int i =hash(key);
        if( contains(key))
        return;
        v[i].push_back(key);
    }
    
    void remove(int key) {
       int  i = hash(key);
        if(contains(key))
        v[i].erase(search(key));
    }
    
    bool contains(int key) {
        int i =hash(key);
        if( search(key) != v[i].end())
        return true;
        else return false;
    }
};
int main()
{MyHashSet obj;
    int t;
    cin>>t;
    while(t--)
    {
    int x;
    cin>>x;
    obj.add(x);
    cout<<obj.contains(x)<<endl;
    obj.remove(x);
    cout<<obj.contains(x)<<endl;
    
    }
}
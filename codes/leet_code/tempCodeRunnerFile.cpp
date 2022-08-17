 unordered_map<char,int>m;
    int ml= 0,msi=0;
    for(int i=0;i<s.size();i++)
    {
        if(m[s[i]]!=0)
        {
            m.clear();
            msi=0;
        }
        else
        {
            m[s[i]]++;
            msi++;
        }
    ml= max(ml,msi);
    }
    return ml;
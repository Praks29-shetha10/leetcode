class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>ss;
        unordered_map<char,int>tt;
        for(int i=0;i<s.size();i++)
        {
            if(ss.find(s[i])==ss.end())
            ss[s[i]]=i;
            if(tt.find(t[i])==tt.end())
            tt[t[i]]=i;
            if(ss[s[i]]!=tt[t[i]])
            return false;
        }
return true;
    }
};
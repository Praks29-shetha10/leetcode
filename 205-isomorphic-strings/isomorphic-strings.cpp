class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>ss;
        unordered_map<char,int>tt;
       for(int i=0;i<s.size();i++)
       {
        char sc=s[i];
        char tc=t[i];
        if(ss.count(s[i]) && ss[s[i]]!=tc)
        return false;
         if(tt.count(t[i]) && tt[t[i]]!=sc)
        return false;
        ss[s[i]]=tc;
        tt[t[i]]=sc;
       }
       return true;
       }
};
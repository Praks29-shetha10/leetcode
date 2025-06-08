class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       vector<int>ans(26,0);
       for(char ch:magazine)
       {
        ans[ch-'a']++;
       }
       for(char ch:ransomNote)
       {
        if(ans[ch-'a']==0)return false;
        ans[ch-'a']--;
       }
       return true;
    }
};
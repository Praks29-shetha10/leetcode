class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int n:nums)
        {
            freq[n]++;
        }
       unordered_set<int>res;
        for(int n:nums)
        {
           if(freq[n]==2)
           res.insert(n);
        }
        vector<int>result;
        for(int n:res)
        {
            result.push_back(n);
        }
        return result;
    }
};
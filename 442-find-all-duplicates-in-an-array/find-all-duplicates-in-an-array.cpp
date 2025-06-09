class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>freq(100001,0);
        for(int n:nums)
        {
            freq[n]++;
        }
        unordered_set<int>s;
        for(int n:nums)
        {
            if(freq[n]==2)
           s. insert(n);
        }
        vector<int>result;
        for(int n:s)
        {
           
           result.push_back(n);
        }
        return result;
    }
};
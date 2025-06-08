class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>result;
        for(int n:nums)
        {
            if(s.count(n))
            result.push_back(n);
            else
            s.insert(n);

           

        }
        return result;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int nsize=nums.size();
        for(int n:nums)
        {
            freq[n]++;
            if(freq[n]>nsize/2)
            {
            return n;
            }
        }
        return -1;
        
        
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations=0;
        int diff=0;
        for(int i=1;i<nums.size();i++)
        {
           if(nums[i]<=nums[i-1])
           {

            diff=nums[i-1]-nums[i]+1;
            nums[i]+=diff;
            operations+=diff;
           }
        }
        return operations;
    }
};
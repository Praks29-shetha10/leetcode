class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int digit=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int num=nums[i];
            while(num)
            {
                digit+=num%10;
                num=num/10;
            }
        }
            return abs(sum-digit);
           
    }
};
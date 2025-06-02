class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n=nums.size();
       int sum=0;
       int count=0;
       for(int i=0;i<n;i++)
       {
        bool lgood=true;
        bool rgood=true;
        if(i-k>=0)
        {
            if(!(nums[i]>nums[i-k]))
            lgood=false;
        }
        if(i+k<n)
        {
            if(!(nums[i]>nums[i+k]))
            rgood=false;
        }
        if(lgood && rgood)
        {
            sum+=nums[i];
        }
       } 
       return sum;
    }
};
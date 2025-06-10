class Solution {
public:

   int robbery(vector<int>&nums,int start,int end)
   {
    int p=0;
    int c=0;
    for(int i=start;i<=end;i++)
    {
    int n=max(c,p+nums[i]);
    p=c;
    c=n;
    }
    return c;
   }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        int case1=robbery(nums,0,n-2);
        int case2=robbery(nums,1,n-1);
        return max(case1,case2);
    }
};
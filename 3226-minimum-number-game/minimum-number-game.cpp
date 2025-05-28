class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>result;
        sort(nums.begin(),nums.end());
        while(!nums.empty())
        {
            int a=nums.front();
            nums.erase(nums.begin());

            int b=nums.front();
            nums.erase(nums.begin());

            result.push_back(b);
            result.push_back(a);
           
        }
        return result;
    }
};
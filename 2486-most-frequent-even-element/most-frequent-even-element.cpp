class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int result=-1;
        vector<int>freq(100001,0);
        int maxfreq=0;
        for(auto& n:nums)
        {
            if(n%2==0)
            {
                freq[n]++;
                if(freq[n]>maxfreq || freq[n]==maxfreq && n<result)
                {
                    result=n;
                    maxfreq=freq[n];
                }
            }
        }
        return result;
    }
};
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int>freq(100001,0);
        int maxfreq=0;
        int result=-1;
        for(auto& n:nums)
        {
            if(n%2==0)
            {
                freq[n]++;
            if(freq[n]>maxfreq || freq[n]==maxfreq && n<result)
            {
                maxfreq=freq[n];
                result=n;
            }
            }
            
        }
        return result;
    }
};
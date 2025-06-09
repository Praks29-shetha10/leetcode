class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>freq;
        int maxfreq=0;
        int result=-1;
        for(int num:nums)
        {
            if(num%2==0)
            {
                freq[num]++;
                 if(freq[num]>maxfreq || freq[num]==maxfreq&&num<result)
                {
                    maxfreq=freq[num];
                    result=num;
                }
               
            }
            

        }
        return result;
    }
};
class Solution {
public:
    int countPairs(vector<int>& d) {
        unordered_map<int,int>freq;
        const int MOD=1e9+7;
        int count=0;
        for(int val:d)
        {
            for(int i=1;i<=2097152;i*=2)
            {
                int ans=i-val;
                if(freq.count(ans))
                {
                    count=(count+freq[ans])%MOD;
                }
            }
            freq[val]++;
        }
        return count;
    }
};
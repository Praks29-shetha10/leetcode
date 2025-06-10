class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        const int MOD = 1e9 + 7;
        unordered_map<int,int>freq;
        int c=0;
        for(int val:deliciousness)
        {
            for(int power=1;power<=2097152;power*=2)
            {
                int pair=power-val;
                if(freq.count(pair))
                {
                    c=(c+freq[pair])%MOD;
                }
            }
            freq[val]++;
        }
        return c;
    }
};
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        for(char ch:columnTitle)
        {
            int value=ch-'A'+1;
            res=res*26+value;
        }
        return res;
    }
};
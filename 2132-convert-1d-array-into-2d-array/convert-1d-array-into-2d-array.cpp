class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>res;
        res.resize(m,vector<int>(n));
    if(original.size()!=m*n){
        return {};
    }
    for(int i=0;i<original.size();i++)
    {
            res[i/n][i%n]=original[i];
    }
    return res;
    }
};
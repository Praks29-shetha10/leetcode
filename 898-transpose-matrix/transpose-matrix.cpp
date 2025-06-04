class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>result;
        int row=matrix.size();
        int col=matrix[0].size();
        result.resize(col,vector<int>(row));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                result[j][i]=matrix[i][j];
            }
        }
        return result;
    }
};
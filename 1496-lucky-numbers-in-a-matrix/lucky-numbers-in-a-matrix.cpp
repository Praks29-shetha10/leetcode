class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>res;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            int min_in_row=matrix[i][0];
            int colIndex=0;
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]<min_in_row)
                {
                min_in_row=matrix[i][j];
                colIndex=j;
                }
            }
            bool max_in_col=true;
            for(int k=0;k<n;k++)
            {
                if(matrix[k][colIndex]>min_in_row)
                {
                    max_in_col=false;
                    break;
                }
            }
            if(max_in_col)
            res.push_back(min_in_row);
        }
        return res;
    }
};
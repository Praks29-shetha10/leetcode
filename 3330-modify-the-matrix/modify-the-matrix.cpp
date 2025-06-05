class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>colMax(m,INT_MIN);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[j][i]!=-1)
                {
                    colMax[i]=max(colMax[i],matrix[j][i]);
                }
            }
        }
        vector<vector<int>>result=matrix;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(result[i][j]==-1)
                {
                   result[i][j]=colMax[j];
                }
            }
        }
        return result;
    }
};
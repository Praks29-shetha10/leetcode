class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxone=0;
        int rowindex=0;
        int row=mat.size();
        int col=mat[0].size();
        for(int i=0;i<row;i++)
        {
            int count=0;
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==1)
                count++;
                if(count>maxone)
                {
                maxone=count;
                rowindex=i;
                }
            }
        }
            return {rowindex,maxone};

    }
};
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>res;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            int minval=matrix[i][0];
            int colindex=0;
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]<minval)
                {
                    minval=matrix[i][j];
                    colindex=j;
                }
            }
                bool maxval=true;
                for(int k=0;k<n;k++)
                {
                    if(matrix[k][colindex]>minval)
                    {
                        maxval=false;
                        break;
                    }
                }
               
            
             if(maxval)res.push_back(minval);
        }
        return res;
    }
};
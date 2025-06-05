class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int total=n*m;
        vector<int>temp(total);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int index=i*m+j;
                temp[index]=grid[i][j];
            }
        }
        vector<int>shift(total);
        for(int i=0;i<total;i++)
        {
            int newindex=(i+k)%total;
            shift[newindex]=temp[i];
        }
        vector<vector<int>>result(n,vector<int>(m));
        for(int i=0;i<total;i++)
        {
            int row=i/m;
            int col=i%m;
            result[row][col]=shift[i];
        }
        return result;
    }
};
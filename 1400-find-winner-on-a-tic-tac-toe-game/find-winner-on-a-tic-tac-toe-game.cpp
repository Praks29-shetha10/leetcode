class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int>rows(3,0),cols(3,0);
        int diagonal=0;
        int antidiag=0;
        int n=moves.size();
        for(int i=0;i<n;i++)
        {
            int row=moves[i][0];
            int col=moves[i][1];
            int player=(i%2==0)?1:-1;

            if(row==col)diagonal+=player;

            if(row+col==2)antidiag+=player;

            rows[row]+=player;
            cols[col]+=player;

            if(abs(rows[row])==3 || abs(diagonal)==3 || abs(cols[col])==3 || abs(antidiag)==3)
            return player==1?"A":"B";

        }
        return n==9?"Draw":"Pending";
    }
};


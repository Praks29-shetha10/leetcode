class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int>rows(3,0),cols(3,0);
        int d=0;
        int antid=0;
        int n=moves.size();
        for(int i=0;i<n;i++)
        {
            int r=moves[i][0];
            int c=moves[i][1];
            int player=(i%2==0)?1:-1;

            if(r==c)d+=player;
            if(r+c==2)antid+=player;

            rows[r]+=player;
            cols[c]+=player;

            if(abs(d)==3 || abs(antid)==3 || abs(rows[r])==3 || abs(cols[c])==3)
            return player==1?"A":"B";

        }
        return n==9?"Draw":"Pending";
    }
};
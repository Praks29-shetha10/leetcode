class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long result=0;
        unordered_map<string,int>rcount;
        for(auto&rect:rectangles)
        {
            int w=rect[0];
            int h=rect[1];
            int g=__gcd(w,h);
            w=w/g;
            h=h/g;
            string key=to_string(w)+"/"+to_string(h);
            result+=rcount[key];
            rcount[key]++;
        }
        return result;
    }
};
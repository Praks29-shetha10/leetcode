class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> res;
        for(int n:nums)
        {
            res.push_back(to_string(n));
        }
        sort(res.begin(),res.end(),[] (string &a,string &b){return a+b>b+a;});
        if(res[0]=="0")return "0";
        string answer="";
        for(auto ch:res)
        {
            answer+=ch;
        }
        return answer;
       
    }
};
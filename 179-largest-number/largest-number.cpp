class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>int_to_string;
        for(int n:nums)
        {
            int_to_string.push_back(to_string(n));
            sort(int_to_string.begin(),int_to_string.end(),[](string &a,string &b){return a+b>b+a;});
        }
        if(int_to_string[0]=="0")return "0";
        string result="";
        for(auto s:int_to_string)
        {
            result+=s;

        }
        return result;
    }
};
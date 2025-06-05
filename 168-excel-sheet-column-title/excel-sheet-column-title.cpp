class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        while(columnNumber>0)
        {
            columnNumber--;
            int remainder=columnNumber%26;
           char ch='A'+remainder;
           res=ch+res;
            columnNumber/=26;
        }
        return res;
    }
};
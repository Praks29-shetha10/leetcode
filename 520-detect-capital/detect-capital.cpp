class Solution {
public:
    bool detectCapitalUse(string word) {
       int capitalcount=0;
        for(int i=0;i<word.size();i++)
        {
            if(isupper(word[i]))capitalcount++;
        }

            if(capitalcount==word.size())return true;
            if(capitalcount==0)return true;
            if(capitalcount==1 && isupper(word[0]))return true;
        
        return false;
    } 
    
};
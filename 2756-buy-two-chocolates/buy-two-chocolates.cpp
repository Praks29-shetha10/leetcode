class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minsum=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
               int  twopairs=prices[i]+prices[j];
                if(twopairs<=money)
                {
                minsum=min(minsum,twopairs);


                }
          
            }           
        }
        if(minsum==INT_MAX)
        return money;

        return money -minsum;
    }
};
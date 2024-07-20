class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=0;
        int key;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
                key=i;
            }
        }
            for(int j=key;j<prices.size();j++)
            {
                if(prices[j]>max)
                {
                    max=prices[j];
                }

            }

        if(prices.size()!=1)
            return max-min;
        else
            return 0;

        
    }
};
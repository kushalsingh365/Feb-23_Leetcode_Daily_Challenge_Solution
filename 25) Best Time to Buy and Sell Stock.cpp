class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result=0,buyingPrice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buyingPrice)
                buyingPrice=prices[i];
            if(prices[i]-buyingPrice>result)
                result=prices[i]-buyingPrice;
        }
        return result;
        
    }
};

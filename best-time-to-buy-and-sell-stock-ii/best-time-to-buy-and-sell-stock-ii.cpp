class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = 0;
        int t = 0;
        for(int i = 1; i < prices.size(); i++){
            s = prices[i] - prices[i-1];
            if(s > 0){
                t += s;
            }
        }
        return t;
    }
};
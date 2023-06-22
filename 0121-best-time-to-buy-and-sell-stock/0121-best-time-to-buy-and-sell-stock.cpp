//Optimal Solution
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int c = INT_MAX, pr = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            c = min(c, prices[i]);
            pr = max(pr, prices[i] - c);
        }
        return pr;
    }
};

//Brute Force
class Solution
{
public:
   int maxProfit(vector<int> &prices) 
   {
    int pr = 0;
    for (int i = 0; i < prices.size(); i++) {
        for (int j = i + 1; j < prices.size(); j++) {
            if (prices[j] > prices[i]) {
            pr = max(prices[j] - prices[i], pr);
            }
        }
     }
    return pr;
  }
};

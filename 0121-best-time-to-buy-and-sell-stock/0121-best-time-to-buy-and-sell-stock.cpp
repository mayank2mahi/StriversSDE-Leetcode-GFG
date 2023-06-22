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
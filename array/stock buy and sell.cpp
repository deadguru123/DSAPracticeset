class Solution {
  public:
    int maximumProfit(vector<int> &a) {
        int n=a.size();
        int mini=a[0],profit=0,cost;
        for(int i=0;i<n;i++)
        {
            cost=a[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,a[i]);
        }
        return profit;
        
    }
};

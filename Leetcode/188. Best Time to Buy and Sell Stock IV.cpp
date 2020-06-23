class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        
        int n = prices.size();
        if(n==0 || k==0){
            return 0;
        }
        // simply add profit as the stock increases due to the unlimited transactions 
        if(k>=n/2) 
         {
             int profit=0;
             for(int i=0;i<n-1;i++)
             {
                 if(prices[i+1]>prices[i]) profit+=prices[i+1]-prices[i];
             }
             return profit;
         }
        vector<vector<int>> dp(k+1,vector<int>(n,0));
        
        for(int i=1;i<=k;i++){
            int prev_exp = INT_MIN;
            for(int j=1;j<n;j++){
                prev_exp = max(prev_exp,dp[i-1][j-1]-prices[j-1]);
                
                dp[i][j] = max(dp[i][j-1],prices[j]+prev_exp);
            }
        }
        
        return dp[k][n-1];
        
        
    }
};

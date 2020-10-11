class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1,0));
        int maxx = INT_MIN;
        
        for(int i=0;i<m;i++){
            if(i==0)
                dp[1][i+1] = nums1[0]*nums2[i];
            else
                dp[1][i+1] = max(dp[1][i],nums1[0]*nums2[i]);
        }
        
        for(int i=0;i<n;i++){
            if(i==0)
                dp[i+1][1] = nums1[i]*nums2[0];
            else
                dp[i+1][1] = max(dp[i][1], nums1[i]*nums2[0]);
        }
        
        for(int i=2;i<=n;i++){
            int prev_sum = dp[i][1];
            for(int j=2;j<=m;j++){
                prev_sum = max(prev_sum, max(dp[i-1][j-1]+nums1[i-1]*nums2[j-1], nums1[i-1]*nums2[j-1]));
                dp[i][j] = max(dp[i-1][j], max(dp[i][j-1], prev_sum));
                
/*
    O(n*m*m) Approach  --------> can be simplified to O(n*m) using prev_sum
    
                for(int k=1;k<=j;k++){
                    dp[i][j] = max(dp[i][j], max(dp[i-1][k-1]+nums1[i-1]*nums2[k-1], nums1[i-1]*nums2[k-1]));
                    
                }
*/
                
                
            }
        }
        
        return dp[n][m];
        
    }
};

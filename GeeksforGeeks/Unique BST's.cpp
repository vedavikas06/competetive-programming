int numTrees(int n) {
    // Your code here
    
    int dp[n][n];
    
    memset(dp,0,sizeof(dp));
    
    for(int i=0;i<n;i++){
        dp[i][i] = 1;
    }
    
    for(int l=2;l<=n;l++){
        for(int i=0;i<n-l+1;i++){
            int j = i+l-1;
            dp[i][j] = 0;
            if(l==2){
                dp[i][j] = 2;
            }else{
                for(int k=i;k<=j;k++){
                    int left = (k>i?dp[i][k-1]:1);
                    int right = (k<j?dp[k+1][j]:1);
                    
                    dp[i][j] += left*right;
                }
            }
        }
    
    }
    
    return dp[0][n-1];
}

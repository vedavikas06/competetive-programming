class Solution {
public:
    int numDecodings(string s) {
        
        long long mod = 1000000007;
        int n= s.length();
        bool notp = false;
        vector<long long> dp(n+1,0);
        dp[0] = 1;
        for(int i=1;i<=n;i++){
            if(i==1){
                if(s[i-1]=='*'){
                    dp[i] = 9;
                }else if (s[i-1]>'0'){
                    dp[i] += dp[i-1];
                    dp[i] %= mod;
                }else{
                    notp = true;
                    break;
                }
            }else{
                
                if(s[i-1]=='*'){
                    dp[i] += 9*dp[i-1];
                    dp[i] %= mod;
                
                
                    if(s[i-2]=='*'){
                        dp[i] += 15*dp[i-2];
                        dp[i] %= mod;
                    }else{
                        if(s[i-2]<='2' && s[i-2] >= '1'){
                            dp[i] += (s[i-2]=='1'?9*dp[i-2]:6*dp[i-2]);
                            dp[i] %= mod;
                        }

                    }
                }else if (s[i-1]>'0'){
                    dp[i] += dp[i-1];
                    dp[i] %= mod;
                    
                    if(s[i-2]=='*'){
                        
                        dp[i] += (s[i-1]<='6'?2*dp[i-2]:dp[i-2]);
                        dp[i] %= mod;
                        
                    }else{
                        
                        if((s[i-2]=='1') || (s[i-2] == '2' && s[i-1] <= '6')){
                            dp[i] += dp[i-2];
                            dp[i] %= mod;
                        }
                        
                    }
                    
                    
                }else{
                    
                    if(s[i-2]=='*'){
                        dp[i] += 2*dp[i-2];
                        dp[i] %= mod;
                    }else if(s[i-2] == '1' || s[i-2] == '2'){
                        dp[i] += dp[i-2];
                        dp[i] %= mod;
                    }else{
                        notp = true;
                        break;
                    }
                    
                }
            }
        }
        
        return notp==true?0:dp[n];
        
        
        
    }
};

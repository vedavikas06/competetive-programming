class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        vector<int> lps(n,0);
        calculateLps(s,n,lps);
        
        int longSuffix = lps[n-1];
        return longSuffix > 0?(n%(n-longSuffix)==0?true:false):false;
        
    }
    
    void calculateLps(string s, int n, vector<int> &lps){
        int st = 1, len = 0;
        while(st < n){
            if(s[st] == s[len]){
                len++;
                lps[st] = len;
                st++;
            }else{
                if(len != 0){
                    len = lps[len-1];
                }else{
                    lps[st] = 0;
                    st++;
                }
            }
        }
    }
};

class Solution {
public:
    string longestPalindrome(string s) {
        
        int maxx = 1,j,k;
        string b=s.substr(0,1);
        int n=s.length();
        for(int i=1;i<n;i++){
            
            j=i-1,k=i+1;
            while(j>=0 && k<n && s[j]==s[k]){
                maxx = max(maxx,k-j+1);
                if(maxx==k-j+1){
                    b = s.substr(j,k-j+1);
                }
                j--,k++;
            }
            
            j=i-1,k=i;
            while(j>=0 && k<n && s[j]==s[k]){
                maxx = max(maxx,k-j+1);
                if(maxx==k-j+1){
                    b = s.substr(j,k-j+1);
                }
                j--,k++;
            }
        }
        return b;
        
    }
};

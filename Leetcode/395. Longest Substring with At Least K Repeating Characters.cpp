class Solution {
public:
// version -1    O(n^2)
//     int longestSubstring(string s, int k) {
//         int maxx = 0,n=s.length();
//         int cnt[26];
//         for(int i=0;i+k<=n;i++){
//             for(int p=0;p<26;p++){
//                 cnt[p]=0;
//             }
//             int max_shift = i;
//             for(int j=i;j<n;j++){
//                 cnt[s[j]-'a']++;
//                 int c=1;
//                 for(int p=0;p<26;p++){
//                     if(cnt[p]<k && cnt[p]!=0){
//                         c=0;
//                         break;
//                     }
//                 }
//                 if(c==1){
//                     maxx = max(maxx,j-i+1);
//                     max_shift = j;
                    
//                 }
//             }
//             i=max_shift;
            
//         }
        
        
//         return maxx;
//     }
    
// version-2 O(n/2^log(n))
public:
    int longestSubstring(string s, int k) {
        return calculate(s, 0, s.size(), k);
    }
private:
    int calculate(const std::string& s, int begin, int end, int k) {
        if (end - begin < k) return 0;
        int maxLen = end - begin;
        
        vector<int> counter(26, 0);
        for (int i = begin; i < end; i++) {
            int index = s[i] - 'a';
            counter[index]++;
        }
        
        for (int j = begin; j < end; j++) {
            int index = s[j] - 'a';
            if (counter[index] < k) {
                int left = calculate(s, begin, j, k);
                int right = calculate(s, j+1, end, k);
                return max(left, right);
            }
        }
        return maxLen;
    }
    
};

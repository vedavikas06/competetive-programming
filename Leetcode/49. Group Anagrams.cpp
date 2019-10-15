class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string,vector<string>> m;
        
        for(int i=0;i<strs.size();i++){
            string s1 = strs[i];
            sort(s1.begin(),s1.end());
            m[s1].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto s:m){
            vector<string> v1;
            v1 = s.second;
            res.push_back(v1);
        }
        
        return res;
        
    }
};

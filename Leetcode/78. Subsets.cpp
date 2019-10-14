class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> s;
        for(int i=0;i<pow(2,n);i++){
            vector<int> v;
            for(int j=0;j<n;j++){
                if ((i & (1 << j)) != 0){
                    v.push_back(nums[j]);
                }
            }
            s.insert(v);
        }
        
        vector<vector<int>> res;
        for(set<vector<int>>:: iterator it = s.begin();it!=s.end();it++){
            res.push_back(*it);
        }
        return res;
        
    }
};

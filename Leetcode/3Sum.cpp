class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<pair<int,pair<int,int>>> s;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int sm = nums[i];
            if(sm <= 0){
                int st=i+1,end=n-1;
                while(st<end){
                    if(nums[st]+nums[end]>-sm){
                        end--;
                    }else if(nums[st]+nums[end]<-sm){
                        st++;
                    }else{
                        s.insert({sm,{nums[st],nums[end]}});
                        //cout<< sm <<endl;
                        //cout << i << " " << st << " " << end << endl;
                        st++;
                    }
                }
            }
                
        }
        vector<vector<int>> res;
        for(set<pair<int,pair<int,int>>>::iterator i = s.begin();i!=s.end();i++){
            vector<int> v;
            v.push_back((*i).first),v.push_back((*i).second.first),v.push_back((*i).second.second);
            res.push_back(v);
        }
        return res;
        
    }
};

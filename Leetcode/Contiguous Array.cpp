class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,vector<int>> m;
        int cnt = 0,maxl=-1,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt-=1;
            }else{
                cnt+=1;
            }
            
            if(cnt==0){
                maxl = max(maxl,i+1);
            }else{
                if(m.find(cnt)!=m.end()){
                    int st = m[cnt][0];
                    maxl = max(maxl,i-st);
                }
                m[cnt].push_back(i);    
            }
            
            
        }
        
        return maxl==-1?0:maxl;
        
        
    }
};

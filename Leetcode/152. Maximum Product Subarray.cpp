class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min_end=1,max_end=1,max_until=1;
        int n = nums.size();
        int pos=0,chn=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                int tmp = max_end;
                max_end = max(1,min_end*nums[i]);
                min_end = tmp*nums[i];
            }else if(nums[i]==0){
                max_end=min_end=1;
            }else{
                max_end*=nums[i];
                min_end = min(1,min_end*nums[i]);
                pos=1;
            }
            if(max_until<max_end){
                max_until=max_end;
                //chn=1;
            }
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]<0 && nums[i+1]<0){
                chn=1;
            }
        }
        if(pos==0 && chn==0){
            return *max_element(nums.begin(),nums.end());
        }
        return max_until;
        
    }
};

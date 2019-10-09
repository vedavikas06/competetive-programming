class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reach = nums[0],n=nums.size();
        int reach = nums[0];
        int steps = 1,i=0;
        while(i<n && i<=reach){
            
            max_reach = max(max_reach,i+nums[i]);
            if(i==reach){
                reach = max_reach;
                steps++;
            }
            i++;
        }
        return i==n;
        
    }
};

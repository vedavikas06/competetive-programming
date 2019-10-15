class Solution {
public:
    int maxArea(vector<int>& height) {
        
        if(height.empty() || height.size()==1){
            return 0;
        }
        
        int res = 0,l=0,r=height.size()-1;
        
        while(l<r){
            
            res = max(res,(r-l)*min(height[l],height[r]));
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
            
        }
        
        return res;
        
        
        
    }
};

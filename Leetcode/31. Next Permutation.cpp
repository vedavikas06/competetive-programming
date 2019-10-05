class Solution {
public:
    int binarysearch(vector<int> nums,int l,int r,int val){
        int st = l,end = r;
        int ind=-1;
        while(st<=end){
            int mid = st + ((end-st)/2);
            
            if(nums[mid]<=val){
                end=mid-1;
            }else{
                st=mid+1;
                if(ind==-1 || nums[ind] >= nums[mid]){
                    ind = mid;
                }
            }
        }
        return ind;
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        while(i>=0 && nums[i]>=nums[i+1]){
            --i;
        }
        if(i==-1){
            reverse(nums.begin(),nums.end());
            return;
        }else{
            int jst_gr = binarysearch(nums,i+1,n-1,nums[i]);
            // int jst_gr = -1,j;
            // for(j=i+1;j<n;j++){
            //     if(nums[j]<=nums[i]){
            //         break;
            //     }
            // }
            // jst_gr = j-1;
            int temp = nums[i];
            nums[i] = nums[jst_gr];
            nums[jst_gr] = temp;
            reverse(nums.begin()+i+1,nums.begin()+n);
            return;
        }
        
    }
};

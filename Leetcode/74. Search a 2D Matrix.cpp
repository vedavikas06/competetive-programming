class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 || matrix[0].size()==0){
            return false;
        }
        int n = matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            if(target>=matrix[i][0] && target<= matrix[i][m-1]){
                int low = distance(matrix[i].begin(),lower_bound(matrix[i].begin(),matrix[i].end(),target));
                //cout << low << endl;
                if(low==m || (matrix[i][low]!=target)){
                    return false;
                }else{
                    return true;
                }
                
            }else{
                continue;
            }
        }
        
        return false;
        
    }
};

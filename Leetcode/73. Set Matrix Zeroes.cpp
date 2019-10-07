class Solution {
public:
//     void setzero(vector<vector<int>>& matrix,int s,int t,int n,int m){

//         for(int i=0;i<m;i++){
//             if(matrix[s][i]==0){
//                 matrix[s][i] = INT_MIN;
//             }else{
//                 matrix[s][i]= INT_MAX;
//             }
//         }
//         for(int i=0;i<n;i++){
//             matrix[i][t]=-1;
//             if(matrix[i][t]==0){
//                 matrix[i][t] = INT_MIN;
//             }else{
//                 matrix[i][t]= INT_MAX;
//             }
//         }
        
//     }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(),m=matrix[0].size();
        
        bool row0 = false,col0 = false;
        for(int i=0;i<m;i++){
            if(matrix[0][i]==0){
                row0 = true;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                col0 = true;
                break;
            }
        }
        
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0,matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        if(row0){
            for(int i=0;i<m;i++){
                matrix[0][i]=0;
                
            }
            
        }
        if(col0){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
                
            }
            
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0 || matrix[i][j]==INT_MIN){
                    setzero(matrix,i,j,n,m);
                }
            }
        }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0 || matrix[i][j]==INT_MIN){
//                     setzero(matrix,i,j,n,m);
//                 }
//             }
//         }
        
//          for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]== INT_MIN || matrix[i][j]==INT_MAX){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
    
        
        
    }
};

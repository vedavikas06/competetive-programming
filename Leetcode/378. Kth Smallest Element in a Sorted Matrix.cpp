class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> p;
        
        int n = matrix.size();
        
        for(int i=0;i<n;i++){
            p.push({matrix[i][0],{i,0}});
        }
        
        for(int i=0;i<k-1;i++){
            pair<int,pair<int,int>> tp=p.top();
            
            p.pop();
            if(tp.second.second != n-1){
                p.push({matrix[tp.second.first][tp.second.second+1],{tp.second.first,tp.second.second+1}});
            }
            
        }
        
        return p.top().first;
        
    }
};

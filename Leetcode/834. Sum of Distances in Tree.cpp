class Solution {
public:
    vector<vector<int>> adj;
    vector<int> cnt, sum, res;
    
    pair<int, int> dfs(int cur, int par){
        for(int j: adj[cur]){
            if(j == par){
                continue;
            }
            pair<int, int> val = dfs(j, cur);
            cnt[cur] += val.first;
            sum[cur] += val.first + val.second; 
        }
        
        return {++cnt[cur], sum[cur]};
    }
    
    void calc(int cur, int par){
         for(int j: adj[cur]){
            if(j == par){
                continue;
            }
            
            res[j] = (res.size() - cnt[j]) + res[cur] - cnt[j];
            calc(j, cur);
        }
    }
    
    vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges) {
        adj.resize(N);
        cnt.resize(N, 0);
        sum.resize(N, 0);
        res.resize(N, 0);
        
        for(vector<int> i: edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        pair<int, int> fin = dfs(0, -1);
        res[0] = fin.second;
        calc(0, -1);
        return res;
    }
};

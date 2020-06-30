class TreeAncestor {
public:
    int n;
    vector<int> par;
    vector<vector<int>> sparse;
    TreeAncestor(int n, vector<int>& parent):n(n), par(parent) {
        sparse = vector<vector<int>>(21,vector<int> (n,-1));
        for(int i=0;i<21;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    sparse[i][j] = par[j];
                }else{
                    int par = sparse[i-1][j];
                    if(par!=-1){
                        sparse[i][j] = sparse[i-1][par];
                    }
                }
            }
        }
    }
    
    int getKthAncestor(int node, int k) {
        int st = node;
        
        for(int i=20;i>=0;i--){
            if((k & (1<<i)) && st!=-1 ){
                st = sparse[i][st];
            }
        }
        
        return st;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */

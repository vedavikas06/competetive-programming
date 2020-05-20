-- 90 points

#include <bits/stdc++.h>
 
using namespace std;
 
int mod = 1000000007;
class LCA{
private:
    int N,LogV;
    vector<vector<int> > sparse;
    vector<int> depth;
    vector<int> dist;
    vector<int> seg; 
    vector<pair<int, int> > entry;
    vector<int> BITTree;
public:
    unordered_map<int, unordered_map<int, int> > adj;
    LCA(){
        N=20000;
        LogV=30;
    }
    ///Initializing
    void init(int n){
        N=n;
        sparse=vector<vector<int> >(LogV+5,vector<int>(N+10,-1));
        depth=vector<int>(N+10,0);
        dist=vector<int>(N+10,0);
        seg = vector<int>(N+10,0);
        entry = vector<pair<int,int>> (N+10,pair<int,int> {0,0});
        BITTree = vector<int>(N+10,0);
        
    }
    ///DFS
    void dfs(int node, int par){
        for(auto it:adj[node]){
            if(it.first!=par){
                sparse[0][it.first]=node;
                depth[it.first]=depth[node]+1;
                dist[it.first]=(dist[node]+it.second)%mod;
                dfs(it.first, node);
            }
        }
    }
    ///Sparse Table
    void sparseTable(){
        for(int i=1;i<=25;i++){
            for(int j=0;j<N;j++){
                int x=sparse[i-1][j];
                if(x!=-1) sparse[i][j]=sparse[i-1][x];
            }
        }
    }
    ///Level up
    int levelUp(int dif, int v){
            while(dif>0){
                int logDif=log2(dif);
                v = sparse[logDif][v];
                dif-=(1<<logDif);
            }
            return v;
    }
    ///Find LCA
    int findLCA(int u, int v){
        if(depth[u]>depth[v]) swap(u,v);
        v=levelUp(depth[v]-depth[u],v);
        if(u==v) return u;
        for(int i=LogV;i>=0;i--){
            int x=sparse[i][u];
            int y=sparse[i][v];
            if(x == -1 || y == -1) continue;
            if(x!=y){
                u=x;
                v=y;
            }
        }
        return sparse[0][u];
    }

    int sum_total(int u, int v){
        
        int lca = findLCA(u,v);
        int sum1 = (dist[u]+getSum(entry[u].first))%mod;
        int sum2 = (dist[v]+getSum(entry[v].first))%mod;
        int sum_lca = (dist[lca]+getSum(entry[lca].first))%mod;

        return (((sum1+sum2)%mod-(2*sum_lca)%mod)+mod)%mod;
    }

 
    void dfs1(int node,int par){
        if(par==-1){
 
            for(auto& it:adj[node]){
                if(it.first!=par){
                    int w = it.second;
                    it.second=(it.second+w)%mod;
 
                    adj[it.first][node] = it.second;
 
                    dfs2(it.first,w%mod);
                }
            }
 
        }else{
            int top_w = adj[node][par];
            adj[node][par] = (adj[node][par]+top_w)%mod;
 
            adj[par][node]=adj[node][par];
            
 
            // dist[node]=(dist[node]+top_w)%mod;
            updateRange(N,top_w,entry[node].first,entry[node].second);
            
 
            for(auto& it:adj[node]){
                if(it.first!=par){
                    int w = it.second;
                    it.second=(it.second+w)%mod;
                    
 
                    adj[it.first][node]=it.second;
                    
 
                    dfs2(it.first,(w)%mod);
                }
            }
 
        }
    }
 
    
 
    void dfs2(int node,int weight){
 
        // for(int i=entry[node].first;i<=entry[node].second;i++){
        //     dist[seg[i]]=(dist[seg[i]]+weight)%mod;
        // }
        updateRange(N,weight,entry[node].first,entry[node].second);
        
 
    }
 
 
 
    void update(int c){
        int par = sparse[0][c];
        dfs1(c,par);
        //cout << c << " " << par << endl;
    }
 
 
    void euler_dfs(int node,int par,int &cnt) 
    { 
        // pushing each node in vector s 
        seg[cnt] = node; 
        entry[node].first = cnt++;
        
        for(auto it:adj[node]){
            if(it.first!=par){
                euler_dfs(it.first, node,cnt);
            }
        }
         entry[node].second = cnt-1;
 
    } 

    int getSum(int index) 
    { 
       
        int sum = 0; // Initialize result 

        // index in BITree[] is 1 more than the index in arr[] 
        index = index + 1; 
    
        // Traverse ancestors of BITree[index] 
        while (index>0) 
        { 
            // Add current element of BITree to sum 
            sum = (sum+BITTree[index])%mod; 
    
            // Move index to parent node in getSum View 
            index -= index & (-index); 
        } 
        return sum;
    
         
    } 
  
 
    void updateBIT(int n, int index, int val) 
    { 
        
        // index in BITree[] is 1 more than the index in arr[] 
        index = index + 1; 
    
        // Traverse all ancestors and add 'val' 
        while (index <= n) 
        { 
            // Add 'val' to current node of BI Tree 
            if(val>0)
                BITTree[index] = (BITTree[index]+val)%mod; 
            else
                BITTree[index] = (BITTree[index]+val+mod)%mod; 

    
            // Update index to that of parent in update View 
            index += index & (-index); 
        } 
       
       
    } 
  
   
    
  
    void updateRange(int n, int val, int l, int r) 
    { 
        
        updateBIT(n,l,val%mod); 
        updateBIT(n,r+1,(-val)%mod); 
        
    } 
  
 
    void print_euler_tree(){
        for(int i=0;i<N;i++){
            cout << seg[i] << " ";
        }
        cout << endl;
        for(int i=0;i<N;i++){
            cout << entry[i].first << " ";
        }
        cout << endl;
        for(int i=0;i<N;i++){
            cout << entry[i].second << " ";
        }
        cout << endl;
    }
 
 
 
}lca;
void solve(){
    int n,q;
    
    cin>>n>>q;
    
 
    lca.init(n);
    //cout << "YES1" << endl;
    for(int i=0;i<n-1;i++){
        int u,v,w;
        cin>>u>>v>>w;
        lca.adj[u][v] = w%mod;
        lca.adj[v][u] = w%mod;
    }
    // int root =  rand() % n;
    lca.dfs(0,-1);
    int cnt=0;
    lca.euler_dfs(0,-1,cnt);
    //lca.print_euler_tree();
    lca.sparseTable();
 
    while(q--){
        int type,x,y,c;
        cin>>type;
        if(type==0){
            cin >> c;
            if(c<n && n>1)
            lca.update(c);
        }else{
            cin >> x >> y;
            if(x<n && y<n && x!=y && n>1)
            cout<<lca.sum_total(x,y)<<endl;
            else
            cout << "0" << endl;
        }
        
    }
 
}
int main() {
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}


-- 40 points

#include <bits/stdc++.h>
 
using namespace std;
 
int mod = 1000000007;
class LCA{
private:
    int N,LogV;
    vector<vector<int> > sparse;
    vector<int> depth;
    vector<int> dist;
    vector<int> seg; 
    vector<pair<int, int> > entry;
public:
    unordered_map<int, unordered_map<int, int> > adj;
    LCA(){
        N=20000;
        LogV=30;
    }
    ///Initializing
    void init(int n){
        N=n;
        sparse=vector<vector<int> >(LogV+5,vector<int>(N+10,-1));
        depth=vector<int>(N+10,0);
        dist=vector<int>(N+10,0);
        seg = vector<int>(N+10,0);
        entry = vector<pair<int,int>> (N+10,pair<int,int> {0,0});
        
    }
    ///DFS
    void dfs(int node, int par){
        for(auto it:adj[node]){
            if(it.first!=par){
                sparse[0][it.first]=node;
                depth[it.first]=depth[node]+1;
                dist[it.first]=(dist[node]+it.second)%mod;
                dfs(it.first, node);
            }
        }
    }
    ///Sparse Table
    void sparseTable(){
        for(int i=1;i<=25;i++){
            for(int j=0;j<N;j++){
                int x=sparse[i-1][j];
                if(x!=-1) sparse[i][j]=sparse[i-1][x];
            }
        }
    }
    ///Level up
    int levelUp(int dif, int v){
            while(dif>0){
                int logDif=log2(dif);
                v = sparse[logDif][v];
                dif-=(1<<logDif);
            }
            return v;
    }
    ///Find LCA
    int findLCA(int u, int v){
        if(depth[u]>depth[v]) swap(u,v);
        v=levelUp(depth[v]-depth[u],v);
        if(u==v) return u;
        for(int i=LogV;i>=0;i--){
            int x=sparse[i][u];
            int y=sparse[i][v];
            if(x == -1 || y == -1) continue;
            if(x!=y){
                u=x;
                v=y;
            }
        }
        return sparse[0][u];
    }
    int Sum(int u, int v){
        return (((dist[u]+dist[v])%mod-((2*dist[findLCA(u,v)])%mod)+mod)%mod);
    }
 
 
	void dfs1(int node,int par){
		if(par==-1){
 
			for(auto& it:adj[node]){
				if(it.first!=par){
					int w = it.second;
					it.second=(it.second+w)%mod;
 
					adj[it.first][node] = it.second;
 
					dfs2(it.first,w%mod);
				}
			}
 
		}else{
			int top_w = adj[node][par];
			adj[node][par] = (adj[node][par]+top_w)%mod;
 
			adj[par][node]=adj[node][par];
			
 
			dist[node]=(dist[node]+top_w)%mod;
			
 
			for(auto& it:adj[node]){
				if(it.first!=par){
					int w = it.second;
					it.second=(it.second+w)%mod;
					
 
					adj[it.first][node]=it.second;
					
 
					dfs2(it.first,(w+top_w)%mod);
				}
			}
 
		}
	}
 
	// void dfs2(int node,int weight,int par){
	// 	dist[node]+=weight;
	// 	dist[node]%=mod;
 
	// 	for(auto it:adj[node]){
    //         if(it.first!=par){
	// 			dfs2(it.first,weight,node);
    //         }
	// 	}
 
	// }
 
    void dfs2(int node,int weight){
 
        for(int i=entry[node].first;i<=entry[node].second;i++){
            dist[seg[i]]=(dist[seg[i]]+weight)%mod;
        }
		
 
	}
 
 
 
	void update(int c){
		int par = sparse[0][c];
		dfs1(c,par);
		//cout << c << " " << par << endl;
	}
 
 
    void euler_dfs(int node,int par,int &cnt) 
    { 
        // pushing each node in vector s 
        seg[cnt] = node; 
        entry[node].first = cnt++;
        bool at = true;
        for(auto it:adj[node]){
            if(it.first!=par){
                euler_dfs(it.first, node,cnt);
            }
        }
         entry[node].second = cnt-1;
 
    } 
 
    void print_euler_tree(){
        for(int i=0;i<N;i++){
            cout << seg[i] << " ";
        }
        cout << endl;
        for(int i=0;i<N;i++){
            cout << entry[i].first << " ";
        }
        cout << endl;
        for(int i=0;i<N;i++){
            cout << entry[i].second << " ";
        }
        cout << endl;
    }
 
 
 
}lca;
void solve(){
    int n,q;
    
    cin>>n>>q;
    
 
    lca.init(n);
	//cout << "YES1" << endl;
    for(int i=0;i<n-1;i++){
        int u,v,w;
        cin>>u>>v>>w;
        lca.adj[u][v] = w;
        lca.adj[v][u] = w;
    }
    // int root =  rand() % n;
    lca.dfs(0,-1);
    int cnt=0;
    lca.euler_dfs(0,-1,cnt);
    //lca.print_euler_tree();
    lca.sparseTable();
 
    while(q--){
        int type,x,y,c;
        cin>>type;
		if(type==0){
			cin >> c;
            if(c<n && n>1)
			lca.update(c);
		}else{
			cin >> x >> y;
            if(x<n && y<n && x!=y && n>1)
			cout<<lca.Sum(x,y)<<endl;
            else
            cout << "0" << endl;
		}
        
    }
 
}
int main() {
	int tc=1;
	//cin>>tc;
	while(tc--){
        solve();
	}
	return 0;
}

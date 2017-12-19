#include<bits/stdc++.h>

using namespace std;

class Graph{
    int v;
    vector<pair<int,int>> *s;
    public:
    Graph(int v1){
        v= v1;
         s = new vector<pair<int,int>>[v];
    }
    void addEdge(int u,int v,int w){
        s[u].push_back(make_pair(v,w));
         s[v].push_back(make_pair(u,w));
    }
    void shortestPath(int src){
        set<pair<int,int>> sed;
        vector<int> dist(v,INT_MAX);
        sed.insert(make_pair(0,src));
        dist[src]=0;
        
        while(!sed.empty()){
            pair<int,int> tmp = *(sed.begin());
            sed.erase(sed.begin());
            vector<pair<int,int>>::iterator it;
            int u = tmp.second;
            for(it = s[u].begin();it!=s[u].end();it++){
                int v = (*it).first;
               
                int wei = (*it).second;
                
                
                if(dist[v]>dist[u]+wei){
                    
                    if(dist[v]!=INT_MAX){
                        sed.erase(sed.find(make_pair(dist[v],v)));
                    }
                    dist[v] =dist[u] +wei;
                    sed.insert((make_pair(dist[v],v)));
                    
                }
                
                
            }
            
            
            
            
        }
        
        
        for(int i=0;i<v;i++){
            if(i!=src){
            if(dist[i]!=INT_MAX)
            cout << dist[i] << " ";
            
            else{
                cout << "-1" << " ";
            }
        }
            
        }
        cout << endl;        
    
    
    }
};






int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        
        int n;
        int m;
        cin >> n >> m;
        Graph g(n);
        for(int a1 = 0; a1 < m; a1++){
            int x;
            int y;
            int r;
            cin >> x >> y >> r;
            g.addEdge(x-1,y-1,r);
        }
        int s;
        cin >> s;
        g.shortestPath(s-1);
    }
    return 0;
}

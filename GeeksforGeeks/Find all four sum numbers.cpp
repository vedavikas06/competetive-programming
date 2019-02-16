#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

int main() {



	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	int t;

	cin >> t;
	
	for(int i=0;i<t;i++){
	    int n,k;
	    cin >> n >> k;
	    
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    map<int,vector<pii> > m;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            m[a[i]+a[j]].push_back({i,j});
	           
	        }
	    }
	    bool found = false;
	    set<pair<int,pair<int,pii>> > s;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            
	            if(m.find(k-a[i]-a[j]) != m.end()){
	               for(auto p:m[k-a[i]-a[j]]){
	               
    	               pii p2 =  p;
    	               vector<int> v;
    	               if(i != p2.first && i != p2.second && j != p2.first && j != p2.second ){
    	                    found = true;
    	                    v.push_back(a[i]);v.push_back(a[j]);
    	                    v.push_back(a[p2.first]); v.push_back(a[p2.second]);
    	                    sort(v.begin(),v.end());
    	                   
    	                    if(s.find({v[0],{v[1],{v[2],v[3]}}})==s.end()){
    	                        found = true;
    	                        s.insert({v[0],{v[1],{v[2],v[3]}}});
    	                        //cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " $";  
    	                    }
    	                        
    	               }
	               
	            }
	            
	            }
	        }
	    }
	    if(!found){
	        cout << "-1";
	    }else{
	        for(auto v:s){
	            cout << v.first << " " << v.second.first << " " << v.second.second.first << " " << v.second.second.second << " $"; 
	        }
	    }
	    cout << endl;
	    
	    
	    
	}

	
	return 0;


}

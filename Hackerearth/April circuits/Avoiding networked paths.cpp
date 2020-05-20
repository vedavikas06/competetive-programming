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
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
 
 
struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 
 
long long mod1 = 100000007700000049, mod2 = 100000007,mod3= 1000000007;
long long mod =  1000000007;


int main(){
 
	ios_base::sync_with_stdio(false);
 
	cin.tie(NULL);
 
	int n,m,k,w;
	cin >> n >> m >> k >> w;
	// cout << n << m << k << w << endl;
 
	
	// vector<pair<pair<int,int>,long long>> net;
	int a,b;
	long long v;
	vector<int> chk(n,0),chk1(m,0);
	unordered_map<int,int> net1[n+1];
	for(int i=0;i<k;i++){
		cin >> a >> b >> v;
		// cout << a << " "  << b << " " << v << endl;
		// cout << mod1 << " " << mod2 << endl;
		//net.push_back({{a,b},v});
		if(v%mod1 == 0){
			net1[a][b] = 3;
			chk[a-1]++;
			chk1[b-1]++;
			// cout << "net" << net1[{a,b}] << endl;
		}else if(v%mod2==0){
			net1[a][b] = 1;
			chk[a-1]++;
			chk1[b-1]++;
			// cout << net1[{a,b}] << endl;
		}else if(v%mod3==0){
			net1[a][b] = 2;
			chk[a-1]++;
			chk1[b-1]++;
			// cout << net1[{a,b}] << endl;
		}
	}
 
	vector< vector<long long> > mz(min(m,n), vector<long long> (3,0));
 
	if(net1[1].find(1)!=net1[1].end()){
		if(net1[1][1]==1){
			mz[0][0] = 0;
			mz[0][1] = 1;
			mz[0][2] = 0;
 
		}else if(net1[1][1]==2){
			mz[0][0] = 0;
			mz[0][1] = 0;
			mz[0][2] = 1;
		}else{
			mz[0][0] = 0;
			mz[0][1] = 0;
			mz[0][2] = 0;
		}
	}else{
		mz[0][0] = 1;
		mz[0][1] = 0;
		mz[0][2] = 0;
	}
 
  
	for (int i=1; i<m; i++) 
	{
		if(net1[1].find(i+1)!=net1[1].end()){
			if(net1[1][i+1]==3){
				mz[i][0] = 0;
				mz[i][1] = 0;
				mz[i][2] = 0;

			}else if(net1[1][i+1]==1){
				mz[i][0] = 0;
				mz[i][1] = (mz[i-1][0]+mz[i-1][1])%mod;
				mz[i][2] = 0;
			}else{
				mz[i][0] = 0;
				mz[i][1] = 0;
				mz[i][2] = (mz[i-1][0]+mz[i-1][2])%mod;

			}
		}else{
			mz[i][0] = mz[i-1][0];
			mz[i][1] = mz[i-1][1];
			mz[i][2] = mz[i-1][2];
		}
				
	} 
	

		// for (int i=1; i<n; i++) 
		// {
		// 	if(net1[i+1].find(1)!=net1[i+1].end()){
		// 		if(net1[i+1][1]==3){
		// 			mz[i][0] = 0;
		// 			mz[i][1] = 0;
		// 			mz[i][2] = 0;

		// 		}else if(net1[i+1][1]==1){
		// 			mz[i][0] = 0;
		// 			mz[i][1] = (mz[i-1][0]+mz[i-1][1])%mod;
		// 			mz[i][2] = 0;
		// 		}else{
		// 			mz[i][0] = 0;
		// 			mz[i][1] = 0;
		// 			mz[i][2] = (mz[i-1][0]+mz[i-1][2])%mod;

		// 		}
		// 	}else{
		// 		mz[i][0] = mz[i-1][0];
		// 		mz[i][1] = mz[i-1][1];
		// 		mz[i][2] = mz[i-1][2];
		// 	}
					
		// } 


	
  
  
	for (int i=1; i<n; i++) 
	{ 
		if(chk[i]==0){

			for(int j=1;j<m;j++){
				mz[j][0] = (mz[j][0]+mz[j-1][0])%mod;
				mz[j][1] = (mz[j][1]+mz[j-1][1])%mod;
				mz[j][2] = (mz[j][2]+mz[j-1][2])%mod;
			}

		}else{

			for (int j=0; j<m; j++) 
			{ 
				if(j==0){
					if(net1[i+1].find(1)!=net1[i+1].end()){
						if(net1[i+1][1]==3){
							mz[0][0] = 0;
							mz[0][1] = 0;
							mz[0][2] = 0;
	
						}else if(net1[i+1][1]==1){
								
							mz[0][1] = (mz[0][0]+mz[0][1])%mod;
							mz[0][2] = 0;
							mz[0][0] = 0;
						}else{
							
							mz[0][2] = (mz[0][0]+mz[0][2])%mod;						
							mz[0][0] = 0;
							mz[0][1] = 0;
	
						}
					}
	
				}else{
					if(net1[i+1].find(j+1)!=net1[i+1].end()){
						if(net1[i+1][j+1]==3){
							mz[j][0] = 0;
							mz[j][1] = 0;
							mz[j][2] = 0;
	
						}else if(net1[i+1][j+1]==1){
							mz[j][1] = (mz[j][0]+mz[j-1][0]+mz[j][1]+mz[j-1][1])%mod;
							mz[j][0] = 0;
							mz[j][2] = 0;
						}else{
								
							mz[j][2] = (mz[j][0]+mz[j-1][0]+mz[j][2]+mz[j-1][2])%mod;	
							mz[j][0] = 0;
							mz[j][1] = 0;
	
						}
					}else{
						mz[j][0] = (mz[j][0]+mz[j-1][0])%mod;
						mz[j][1] = (mz[j][1]+mz[j-1][1])%mod;
						mz[j][2] = (mz[j][2]+mz[j-1][2])%mod;
					}
				} 
			}
	
		} 
	}
	cout << (mz[m-1][0]+mz[m-1][1]+mz[m-1][2])%mod << endl;

	
 
	
 
	return 0;
 
 
}
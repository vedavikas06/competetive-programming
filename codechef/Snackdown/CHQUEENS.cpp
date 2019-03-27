#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define fir first
#define sec second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef pair<long long , long long> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
LL mod = 1000000007;

int main() {

	// int start_s = clock();

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	int t;
	cin >> t;
	for (int i1 = 0; i1 < t; ++i1)
	{
		
	
 	int n,m,x,y;

 	cin >> n >> m >> x >> y;

 	int sum =0;
 	for (int i = 1; i <= n; ++i)
 	{
 		for (int j =1; j <= m; ++j)
 		{

 			if(i!= x || j != y){
 			
	 			int n_p = n-1+m-1+min(i-1,j-1)+min(n-i,m-j)+min(i-1,m-j)+min(n-i,j-1)+1;
	 			int go =0;
	 			bool tr = false;
 				if(i == x){
 					tr = true;
 					if(j > y){
 					go+=(y-1);
 			
 					}else{
 					go+=(m-y);		
 					}



 				}else if(j == y){
 					tr = true;
 					if(i>x){
 						go+=(x-1);
 					}else{
 						go+=(n-x);
 					}
 				}else if(i+j == x+y){
 					tr = true;
 					if(i<x){
 						go+=min(n-x,y-1);
 					}else{
 						go+=min(x-1,m-y);
 					}
 				}else if(x-i == y-j){
 					tr = true;
 					if(x>i){
 						go+=min(n-x,m-y);
 					}else{
 						go+=min(x-1,y-1);
 					}
 				}
 				if(tr == false){
 					n_p+=1;
 				}
 			//cout << n_p << " " << go << " " << i << " " << j << endl;	

 			sum+=(n*m-n_p)+go;

 			}






 		}

 	}

 	cout << sum << endl;


}
	// int stop_s = clock();

	// cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

	return 0;


}




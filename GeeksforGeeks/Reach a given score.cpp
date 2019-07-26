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
	    
	    int n;
	    
	    cin >> n;
	    
	    int dp[max(n,10)+1];
	    
	    memset(dp, 0, sizeof(dp));
	    dp[0]=1;

	    
        for(int j=3;j<=n;j++){
            dp[j]+=dp[j-3];
        }
        for(int j=5;j<=n;j++){
            dp[j]+=dp[j-5];
        }
        for(int j=10;j<=n;j++){
            dp[j]+=dp[j-10];
        }
        
        cout << dp[n] << endl;
    
	}

	
	return 0;


}

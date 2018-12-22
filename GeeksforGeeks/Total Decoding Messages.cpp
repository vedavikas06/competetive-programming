
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

LL decode (string s,vector<LL> &dp,int i,int n){
    
    if(dp[i]!=-1){
        return dp[i];
        
    }
    
    if(i<n && s[i]=='0'){
        return 0;
    }
    
    if(i==n-1 || i==n){
        return 1LL;
    }
    
    
    int a = s[i]-'0',b = s[i+1]-'0';
    
    int c =10*a+b;
    
    
    if(c<=26){
        dp[i] = decode (s,dp,i+1,n)+decode (s,dp,i+2,n);
    }else{
        dp[i] = decode (s,dp,i+1,n);

    }
    
    
    return dp[i];
}

int main() {



	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	int t;

	cin >> t;
	
	
	for0(i,t){
	    
	    int n;
	    
	    
	    cin >> n;
	    
	    string s;
        cin >> s;
        
        vector<LL> dp(n+1,-1);
        
        LL val = decode(s,dp,0,n);
        
        
        cout << val << endl;
        
        

	}

	
	return 0;


}

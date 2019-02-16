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
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    long long sum = 0,cnt=0;
	    unordered_map<int,int> m;
	    m[0]=1;
	    for(int i=0;i<n;i++){
	        
	        sum+=a[i];
	        if(m.count(sum)==0){
	            m[sum]=1;
	        }else{
	            cnt+=m[sum];
	            m[sum]+=1;
	        }
	    }
	    
	    cout << cnt << endl;
	    
	    
	}
	return 0;


}

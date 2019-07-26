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
	    
	    
	    string s;
	    
	    cin >> s;
	    
	    int aC=0,bC=0,cC=0;
	    
	    for(int j=0;j<s.length();j++){
	        
	        
	        if(s[j]=='a'){
	            aC = 2*aC+1;
	        }else if(s[j]=='b'){
	            bC = aC+ 2*bC;
	        }else if(s[j]=='c'){
	            cC = bC + 2* cC;
	        }
	    }
	    
	    cout << cC << endl;
	}

	
	return 0;


}

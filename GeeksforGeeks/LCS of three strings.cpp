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
	    
	    int l,m,n;
	    cin >> l >> m >> n;
	    
	    string s1,s2,s3;
	    
	    cin >> s1 >> s2 >> s3;
	    
	    int arr[l+1][m+1][n+1];
	    
	    for(int j=0;j<=l;j++){
	        for(int k=0;k<=m;k++){
	            for(int p=0;p<=n;p++){
	                
	                
	                if(j==0 || k==0 || p==0){
	                    arr[j][k][p] = 0;
	                }else{
	                    if(s1[j-1] == s2[k-1] && s2[k-1] == s3[p-1]){
	                        arr[j][k][p] = 1+arr[j-1][k-1][p-1];
	                    }else{
	                        arr[j][k][p] = max(max(max(max(max(arr[j][k][p-1],arr[j][k-1][p]),arr[j-1][k][p]),arr[j-1][k-1][p]),arr[j][k-1][p-1]),arr[j-1][k][p-1]);
	                    }
	                }
	            }
	        }
	        
	    }
	    cout <<  arr[l][m][n] << endl;
	}

	
	return 0;


}

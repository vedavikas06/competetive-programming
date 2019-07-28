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
        
        int arr[n];
        
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        
        int dp[n][n];
        
        memset(dp,0,sizeof(dp));
        
        for(int j=0;j<n;j++) {
            dp[j][j] = 1;
        }
        
        int maxx = 1;
        
        int st,fin;
        
        for(int l=2;l<=n;l++){
            for(int j=0;j<n-l+1;j++){
                int k = j+l-1;
                dp[j][k] = 0;
                if(l==2){
                    if(arr[j] > arr[k]){
                        dp[j][k] = 2;
                    }else if(arr[j] < arr[k]){
                        dp[j][k] = 1;
                    }
                }else{
                    
                    if(arr[j]>arr[j+1] && dp[j+1][k] == 1){
                        dp[j][k] = 2;
                    }else if(arr[j]<arr[j+1] && dp[j+1][k] == 2){
                        dp[j][k] = 1;
                    }
                    // else if(arr[k-1]>arr[k] && dp[j][k-1] == 1){
                    //     dp[j][]
                    // }
                    
                    
                    
                }
                
                for(int t=j;t<=k;t++){
                    cout << arr[t] << " ";
                }
                
                cout << dp[j][k] << endl;
                
                if(dp[j][k]){
                    if(k-j+1>maxx){
                        maxx = k-j+1;
                        st = j;
                        fin = k;
                    }
                }
            }
        }
        
        cout << maxx << " " << st << " " <<  fin << endl;
    }
	
	
	
	return 0;


}

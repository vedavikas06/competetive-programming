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
        
        int dp[n][2];
         for(int j=0;j<n;j++){
            for(int k=0;k<2;k++){
                dp[j][k]=1;
            }
         }
        
        
       
        
        for(int j=1;j<n;j++){
            for(int k=0;k<j;k++){
                
                if(arr[j]>arr[k] && dp[j][0]<dp[k][1]+1){
                    dp[j][0] = dp[k][1]+1;
                }
                
                if(arr[j]<arr[k] && dp[j][1]<dp[k][0]+1){
                    dp[j][1] = dp[k][0]+1;
                }
                

            }
        }
        
        cout << max(dp[n-1][0],dp[n-1][1]) << endl;
    }
	
	
	
	return 0;


}

#include<bits/stdc++.h>
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
	    
	    int lis[n];
	    
	    lis[0] = arr[0];
	    
	    
	    for(int j=1;j<n;j++){
	        lis[j] = arr[j];
	        for(int k=0;k<j;k++){
	            if(arr[k]<arr[j] && lis[k]+arr[j]>lis[j]){
	                lis[j] = lis[k]+arr[j];
	            }
	        }
	    }
	    
	    int lds[n];
	    
	    lds[n-1] =arr[n-1];
	    
	    for(int j=n-2;j>=0;j--){
	        lds[j] = arr[j];
	        for(int k=n-1;k>j;k--){
	            if(arr[k]<arr[j] && lds[k]+arr[j]>lds[j]){
	                lds[j] = lds[k]+arr[j];
	            }
	        }
	    }
	    
	    
	    int maxx = INT_MIN;
	   // cout << "lis" << " ";
	   // for(int j=0;j<n;j++){
	   //     cout << lis[j] << " ";
	   // }
	   // cout << endl;
	    
	   // cout << "lds" << " ";
	   // for(int j=0;j<n;j++){
	   //     cout << lds[j] << " ";
	   // }
	   // cout << endl;
	    
	    for(int j=0;j<n;j++){
	        if(lis[j]+lds[j]-arr[j] > maxx){
	            maxx = lis[j]+lds[j]-arr[j];
	        }
	    }
	    
	    cout << maxx << endl;
	}

	
	return 0;


}

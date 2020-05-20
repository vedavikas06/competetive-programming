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
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef pair<long long , long long> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
LL mod = 1000000007;



int main() {

	// int start_s = clock();

	// ios_base::sync_with_stdio(false);

	// cin.tie(NULL);

	int t,t1;

	cin >> t;
    t1=t;

	while(t--){

		int n;
		cin >> n;
		string s;
		cin >> s;

		vector<int> prA(n+1,0);
		vector<int> prB(n+1,0);

		for0(i,n){
			prA[i+1] = prA[i];
			prB[i+1] = prB[i];
			if(s[i]=='A'){
				prA[i+1] += 1;
			}else{
				prB[i+1] += 1;
			}
		}
		int na,nb;
		int mx = INT_MAX;
		for0(i,n+1){
			if(i==0){
				na = prA[n] - prA[0];
				mx = min(mx,na);
			}else if(i==n){
				nb = prB[n] - prB[0];
				mx = min(mx,nb);
			}else{
				nb = prB[i] - prB[0];
				na =  prA[n] - prA[i];

				mx = min(mx,na+nb);

			}

		}


		cout << mx << endl;
        
        



    }

	// int stop_s = clock();

	// cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

	return 0;

}

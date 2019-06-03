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

bool tmp(pair<LL,LL> t1, pair<LL,LL> t2){
	if(t1.first != t2.first){
	return t1.first < t2.first;
	}else{
		t1.second < t2.second;
	}
}


int main() {

	// int start_s = clock();

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

 	LL n,k,p;

 	cin >> n >> k >> p;

 	LL a[n];
 	vector<pair<LL,LL> > v;

 	for(int i=0;i<n;i++){
 		cin >> a[i];

 		v.push_back({a[i],i});
 	}

 	sort(v.begin(),v.end(),tmp);

 	int chn[n];

 	for(int i=0;i<n;i++){
 		chn[v[i].second] = i;
 	}

 	// for(int i=0;i<n;i++){
 	// 	cout << chn[i] << " ";
 	// }
 	// cout << endl;

 	LL min_t[n];

 	min_t[0] =  v[0].first-k;

 	for(int i=1;i<n;i++){

 		if(v[i].first-v[i-1].first <= k){

 			min_t[i] = min_t[i-1];

 		}else{

 			min_t[i] = v[i].first-k;
 		}
 	}


 	LL max_t[n];

 	max_t[n-1] =  v[n-1].first+k;

 	for(int i=n-2;i>=0;i--){

 		if(v[i+1].first-v[i].first <= k){

 			max_t[i] = max_t[i+1];

 		}else{

 			max_t[i] = v[i].first+k;
 		}
 	}

 	// for(int i=0;i<n;i++){
 	// 	cout << min_t[i] << " ";
 	// }
 	// cout << endl;

 	for(int i=1;i<=p;i++){

 		int a,b;
 		cin >> a >> b;

 		int new_a,new_b;

 		new_a = chn[a-1];
 		new_b = chn[b-1];

 		if(new_a > new_b){
 			int t = new_a;
 			new_a = new_b;
 			new_b = t;
 		}

 		// LL minn = min_t[new_b];

 		if(v[new_a].first >= min_t[new_b] || v[new_b].first <= max_t[new_a]){
 			cout << "Yes" << endl;
 		}else{
 			cout << "No" << endl;
 		}



 	}



 	
 	
	// int stop_s = clock();

	// cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

	return 0;
 	}







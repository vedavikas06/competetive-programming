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


bool cmp(pii &a1,pii &a2){
    if(a1.first==a2.first){
        return a1.second<=a2.second;
    }
    return a1.first>a2.first;
}
int main() {



	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	int t;

	cin >> t;
	
	for(int i=0;i<t;i++){
	    int n;
	    cin >> n;
	    
	    int a[n];
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        m[a[i]]++;
	    }
	    vector<pii> v;
	    for(auto i:m){
	        v.push_back({i.second,i.first});
	    }
	    sort(v.begin(),v.end(),cmp);
	    
	    for(int i=0;i<v.size();i++){
	        for(int j=0;j<v[i].first;j++){
	            cout << v[i].second << " ";
	        }
	    }
	    
	    cout << endl;
	}

	
	return 0;


}

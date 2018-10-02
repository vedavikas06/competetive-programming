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
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;



int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

 int n;

 cin >> n;

 vii v;

 int ans = 0;

 for (int i = 0; i < n; ++i)
 {
 	int a,b;

 	cin >> a >> b;

 	v.pb({a,b});
 }
int inti =  v[0].second;
 for (int i = 1; i < n; ++i)
 {
 	if(v[i].second > inti && v[i].first <= inti){
    int temp = v[i].first;
    v[i].first = v[i].second;
    v[i].second = temp;
 	}else if(v[i].second <= inti && v[i].first <= inti){
 		int maxx = max(v[i].first,v[i].second),minn = min(v[i].first,v[i].second);
 		v[i].first = minn;
 		v[i].second = maxx;
 	}else if(v[i].second > inti && v[i].first > inti){
 		ans = 1;
 		break;
 	}

 	inti = v[i].second;

 }

 // for (int i = 0; i < n; ++i)
 // {
 // 	cout << v[i].first << " " << v[i].second << endl;
 // }
 // cout << ans << endl;

if(ans == 0){
 cout << "YES" << endl;
}else{
int an =0;

int inti =  v[0].first;
 for (int i = 1; i < n; ++i)
 {
 	if(v[i].second > inti && v[i].first <= inti){
    int temp = v[i].first;
    v[i].first = v[i].second;
    v[i].second = temp;
 	}else if(v[i].second <= inti && v[i].first <= inti){
 		int maxx = max(v[i].first,v[i].second),minn = min(v[i].first,v[i].second);
 		v[i].first = minn;
 		v[i].second = maxx;
 	}else if(v[i].second > inti && v[i].first > inti){
 		an = 1;
 		break;
 	}
 	inti = v[i].second;

 }

 if(an == 0){
 	cout << "YES" << endl;
 }else{
 	cout << "NO" << endl;
 }



}






  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

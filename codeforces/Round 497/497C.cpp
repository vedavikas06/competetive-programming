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

 vi v(n);

 int ans = 0;

 map<int,int> m;
 for (int i = 0; i < n; ++i)
 {
 	cin >> v[i];
 	m[v[i]]++;

 }

 sort(v.begin(), v.end());

 // for (int i = 0; i < n; ++i)
 // {
 // 	cout << v[i] << endl;
 // }

 // vi v1;

 int maxx = INT_MIN;

 for (map<int,int>::iterator it = m.begin(); it != m.end() ; ++it)
 {
 	maxx = max(maxx,it->second);
 }


 // map<int,int>:: iterator it = m.begin();

 // for (int i = 0; i < it->second; ++i)
 // {
 // 	v1.pb(it->first);
 // }

 // for (int i = 0; i < n; ++i)
 // {
 // 	cout << v1[i] << " ";
 // }

 // cout << endl;

 // int m1 =0;

 // for (int i = 0; i < n; ++i)
 // {
 // 	if(v[i] < v1[i]){
 // 		m1++;
 // 	}
 // }

 cout << n-maxx << endl;


  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

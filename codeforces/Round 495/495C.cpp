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

  int a[n];

  for0(i, n) {cin >> a[i];}

  map<int, pii> m;



  for0(i, n) {

    if (m[a[i]].first == 0) {
      m[a[i]].first = i + 1;
    } else {
      m[a[i]].second = i + 1;
    }

  }


// for0(i,n){

//   cout << a[i] << " " << m[a[i]].first << " " << m[a[i]].second << endl;

//  }

  map<int, int> m1, m2, m3;

  int tote = 0;
  for (auto e : m) {
    // cout << e.fir << " " << e.sec.fir << " " << e.sec.sec << endl;

    m1[e.sec.fir] = e.fir;
    tote++;
    if (e.sec.sec) {
      m1[e.sec.sec] = e.fir;
      m3[e.fir] = 1;
    }

  }

  //cout << tote << endl;

  int j = 1;

  for (auto e : m1) {
    m2[j++] = e.sec;

  }

  vector<int> v;

  for (auto e : m2) {

    //cout << e.fir << " " << e.sec <<  endl;
    v.pb(e.sec);

  }

  // for(auto it:v){
  //   cout << it << " ";
  // }
  // cout << endl;

  set<int> s;

  LL cnt = 0;

  for0(i, v.size()) {

    if (m3[v[i]] == 0) {
      tote -= 1;
    }

    if (s.find(v[i]) == s.end()) {

      //cnt += (v.size()- 1 - i);
      cnt += tote;
      s.insert(v[i]);

      //cout << v[i] << " " << v.size()-1-i << endl;

    }

    if (m3[v[i]] == 1) {
      m3[v[i]] -= 1;
    }


  }


  cout << cnt << endl;

  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

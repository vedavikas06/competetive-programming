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





vector < vector<int> >dp(2000, vector<int> (2000, INT_MAX));

vector < vector<int> >mp(2000, vector<int> (2000, -1));


int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n, k;

  cin >> n >> k;

  vector<pii> v;

  for1(i, n) {
    pii u = {max(1, i - k), min(n, i + k)};
    v.pb(u);

    dp[u.first][u.second] = 1;

    mp[u.first][u.second] = i;

  }

  vector<int> par(n+1,-1);

  int last = -1;

  for0(i, n) {

    pii u = v[i];

    if (u.first != 1 &&dp[1][u.first-1] !=INT_MAX ) {
      if(dp[1][u.first-1]+dp[u.first][u.second] < dp[1][u.second]){
      dp[1][u.second] = dp[1][u.first-1]+dp[u.first][u.second];
      mp[1][u.second] = i+1;
      par[i+1] = mp[1][u.first-1];
      last = i+1;
    }


    }

  }
  int ls = last;

  vector<int> sol;

  while(ls!=-1){
    sol.pb(ls);
    ls = par[ls]; 
  }

  sort(sol.begin(),sol.end());

  if(sol.empty()){
    sol.pb(mp[1][n]);
  }



  cout << dp[1][n] << endl;


  for(auto it: sol){
    cout << it << " ";
  }

  cout << endl;










  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

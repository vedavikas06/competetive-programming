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

  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }


  vector<pii> pos, neg, zer;

  for (int i = 0; i < n; ++i)
  {
    if (a[i] > 0) {

      pos.pb({a[i], i+1});

    } else if (a[i] < 0) {
      neg.pb({a[i], i+1});
    } else {

      zer.pb({a[i], i+1});
    }

  }

  int t_n = neg.size(), t_p = pos.size(), t_z = zer.size();
  vector<pii> rem;
  if (t_n == 0 && t_z == 0 ) {

  } else if (t_n % 2 == 1 ) {
    if (t_z != n - 1) {
      rem = zer;
      zer.clear();
    }
    pii maxx = *max_element(neg.begin(), neg.end());
    
    neg.erase(max_element(neg.begin(), neg.end()));
    rem.pb(maxx);
  } else if (t_n % 2 == 0) {
    if (t_z != n) {
      rem = zer;
      zer.clear();
    }

  }
  if (!rem.empty()) {
    int siz = rem.size();

    if (siz == 1) {
      cout << "2 " << rem[0].second << endl;

    }

    int dmp = rem[0].second;

    for (int i = 1; i < siz; i++) {
      cout << "1 " << rem[i].second  << " " << dmp << endl;
    }
    if(siz>1)
    cout << "2 " << dmp << endl;

  }

  pos.insert(pos.end(), neg.begin(), neg.end());

  pos.insert(pos.end(), zer.begin(), zer.end());


  if (!pos.empty()) {
    int dmp = pos[0].second;
    int siz = pos.size();

    for (int i = 1; i < siz; ++i)
    {
      cout << "1 " << pos[i].second  << " " << dmp << endl;
    }


  }
  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

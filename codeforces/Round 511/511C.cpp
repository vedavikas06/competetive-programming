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

bool checkprime(int N) {
  int count = 0;
  for ( int i = 1; i * i <= N; ++i ) {
    if ( N % i == 0) {
      if ( i * i == N )
        count++;
      else       // i < sqrt(N) and (N / i) > sqrt(N)
        count += 2;
    }
  }
  if (count == 2)
    return true;
  return false;
}


int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n;

  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; ++i)
  {

    int a;

    cin >> a;
    v.pb(a);

  }

  int res = v[0];

  for (int i = 1; i < n; ++i)
  {
    res = __gcd(res, v[i]);
  }


  for (int i = 0; i < n; ++i)
  {
    v[i] = v[i] / res;
  }

  vector<int> mb(n, 0);

  for (int i = 0; i < n; ++i)
  {
    int a = v[i];

    while (a % 2 == 0) {
      mb[i]++;
      a /= 2;
    }


  }

  int minn = INT_MAX;
  int cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    if (mb[i] == 0) {
      cnt++;
    }
  }
  if (cnt != n) {
    minn = min(cnt, minn);
  }

  for (int i = 3; i < 1000; i += 2)
  {

    if (checkprime(i)) {

      vector<int> mb(n, 0);

      for (int j = 0; j < n; ++j)
      {
        int a = v[j];

        while (a % i == 0) {
          mb[j]++;
          a /= i;
        }


      }

      int cnt = 0;
      for (int j = 0; j < n; ++j)
      {
        if (mb[j] == 0) {
          cnt++;
        }
      }
      if (cnt != n) {
        minn = min(cnt, minn);
      }

    }

  }

  if(minn == INT_MAX){
    cout << "-1" << endl;
  }else{

  cout << minn << endl;
}
  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

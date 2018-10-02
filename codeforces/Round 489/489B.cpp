//482A.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
//#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

vector<int> factorize(int n) {
  vector<int> res;

  // if(n == 1){
  //   res.pb(1);
  //   return res;
  // }
  for (int i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      res.push_back(i);
      n /= i;
    }
  }
  if (n != 1) {
    res.push_back(n);
  }
  return res;
}

int main() {

  int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  LL l, r, x, y;

  cin >> l >> r >> x >> y;

  LL prod = x * y;

//cout << prod << endl;

// if(l%x != 0){l = l+(x-l%x);};

  int cnt = 0;

  vector<int> v1, v2;

  for (int i = 1; i <= sqrt(y); ++i)
  {
    if(y%i==0){
      if(i*i != y){
        v1.pb(i);
        v1.pb(y/i);
       }else{
         v1.pb(i);
       }
    }
  }

  // v1.insert( v1.end(), v2.begin(), v2.end() );

  if(!v1.empty())
  sort(v1.begin(), v1.end());

  // for (int i = 0; i < v1.size(); ++i)
  // {
  //   cout << v1[i] << " ";
  // }

  // cout << endl;
   
  LL i = prod; 
  int inx = 1;
  LL j = v1[0];
  for (; ; )
  {
    if (prod % j == 0) {

      i = prod / j;

      if (max(i,j) <= r && min(i,j) >= l && __gcd(i, j) == x ) {
        cnt++;
       // cout << i << " " << j << endl;

        // if (i != j) {
        //   cnt++;
        // }

      }


    }

    if (!v1.empty() && inx < v1.size()) {
      j = v1[inx];

      inx++;

    } else {

      break;

    }


  }

  cout << cnt << endl;

  int stop_s = clock();

  //cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;


  return 0;


}

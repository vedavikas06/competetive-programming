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


int even[1000], odd[1000];


int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n, b;

  cin >> n >> b;

  int a[n + 1];

  for (int i = 1; i <= n; ++i)
  {
    cin >> a[i];

    odd[i] = odd[i - 1];
    even[i] = even[i - 1];

    if (a[i] % 2 == 0) {
      even[i] += 1;
    } else {
      odd[i] += 1;
    }

  }

//   for (int i = 1; i <= n; ++i)
//  {
//    cout << odd[i] << " ";
//  }
// cout << endl;

//   for (int i = 1; i <= n; ++i)
//  {
//    cout << even[i] << " ";
//  }
//  cout << endl;



  vi v;

  for (int i = 2; i <= n - 1; i += 2)
  {
    if (odd[i] == even[i]) {
      v.pb(abs(a[i] - a[i + 1]));

    }
  }

//    for (int i = 0; i < v.size(); ++i)
//  {
//    cout << v[i] << " ";
//  }
// cout << endl;




// cout << v.size() << endl;

  sort(v.begin(), v.end());

  int i = 0, cnt = 0;

  while (i < v.size() && b >= 0) {


    b -= v[i];

    if (b >= 0) {
      cnt++;
      i++;
    } else {
      break;
    }

  }


  cout << cnt << endl;



  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

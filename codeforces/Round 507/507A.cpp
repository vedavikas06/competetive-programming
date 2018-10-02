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





vector<int> rnk(200005, 0);


bool comp(int a , int b) {

  return rnk[a] < rnk[b];
}



int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n, a, b;

  cin >> n >> a >> b;



  deque<int> v;


  for (int i = 0; i < n; ++i)
  {
    int j;
    cin >> j;
    v.push_back(j);


  }


  int minn = min(a, b);
  int tot = 0;

  while (!(v.empty() || (v.size()==1))) {

    int fr, bc;

    fr = v.front();

    bc = v.back();

    v.pop_front();
    v.pop_back();

    if (fr == bc && (fr == 0 || fr == 1 )) {
      continue;
    }
    else if ( (fr == 0 || fr == 1 ) &&  (bc == 0 || bc == 1 ) && fr != bc) {
      cout << "-1" << endl;
      return 0;
    } else if (((fr == 2 ) &&  (bc == 0 || bc == 1 )) ) {
      if (bc == 0) {
        tot += a;
      } else {
        tot += b;
      }
    } else if (((bc == 2 ) &&  (fr == 0 || fr == 1 ))) {
      if (fr == 0) {
        tot += a;
      } else {
        tot += b;
      }

    } else if (bc == 2 && fr == 2 ) {

      tot += 2*minn;

    }


  }

  if(v.size()==1){
    if(v.front()==2){
      tot+=minn;
    }
  }


 cout << tot << endl;










  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

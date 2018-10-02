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
  
  int n,m;

  cin >> n >> m;

  int a[n];

  for0(i,n){
    cin >> a[i];
  }
int maxx = *max_element(a,a+n)+m;
int minn=0;
  for (int i = 1; i <= m ; ++i)
  {
    int s = min_element(a,a+n)-a;
    a[s]++;

  }

  minn = *max_element(a,a+n); 

  cout << minn << " " << maxx << endl;


  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

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
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef vector<int> vi;
typedef vector<pii> vii;





int main() {

    // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n;

  cin >> n;


  int sol = 0;

  sol+=(n/100);

  n = n%100;
  
  sol+=(n/20);

  n = n%20;

sol+=(n/10);

  n = n%10;

sol+=(n/5);

  n = n%5;

 sol+=(n/1);




  cout << sol << endl;
  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

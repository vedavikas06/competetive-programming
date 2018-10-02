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

int a[n+1];

for1(i,n){
  cin >> a[i];

}

for1(j,n){

  int st = a[j];
  bool visited[n+1];

  for1(k,n){
    visited[k] = false;
  }

  visited[j] = true;
  while(!visited[st]){
    visited[st] = true;
    st = a[st];
  }

  cout << st << " ";

}

cout << endl;





  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

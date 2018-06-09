//482A.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 1000000007
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

int dp[2][10000007];
int visited[2][10000007];



int reach(int way, int steps) {

 
  if (steps == 0) {
    if (way) {
      return 1;
    } 
      return 0;

  }

  if (visited[way][steps]) {
    return dp[way][steps];
  }

  visited[way][steps] = 1;

  int sum = 0;

  if(way == 1){
    sum = (3LL*reach(0,steps-1))%mx;
  }else{
    sum = (2LL*reach(0,steps-1)+reach(1,steps-1))%mx;
  }
  
  dp[way][steps] = sum;

  return sum;



}

int main() {



  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n;

  cin >> n;

  // cout << reach(1,n) << endl;
  dp[1][0] =1;

  for1(i,n){
    dp[1][i] = (3LL*dp[0][i-1])%mx;
    dp[0][i] = (2LL*dp[0][i-1]+dp[1][i-1])%mx;
  }

  cout << dp[1][n] << endl;

  return 0;


}

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


int a[1000];
bool dp[1000][1000][2];
bool poss[1000][1000];



int main() {

    // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);
 

 int n; cin >> n;


 for (int i = 1; i <= n; ++i)
 {
   cin >> a[i];

   dp[i][i][0] = dp[i][i][1]=true;
 }


 for (int i = 1; i <= n; ++i)
 {
   for (int j = 1; j <= n ; ++j)
   {
     if(__gcd(a[i],a[j]) > 1){
     poss[i][j] = true;
     }
   }
 }


for (int i = 2; i <= n; ++i)
 {

  for (int j = 1; j <= n-i+1 ; ++j)
  {
    int l = j,r = j+i-1;
   
   for(int k = l;k<=r;k++){

    if(dp[l+1][k][1]&& dp[k][r][0] && poss[l][k]){dp[l][r][0]=true;}
    if(dp[l][k][1]&& dp[k][r-1][0] && poss[r][k]){dp[l][r][1]=true;}

   }


  }

 }

bool ans = false;
for (int i = 1; i <= n ; ++i)
{
  if(dp[1][i][1]&& dp[i][n][0]){
    ans = true;
  }
}



// for (int i = 1; i <= n; ++i)
//  {

//   for (int j = 1; j <= n ; ++j)
//   {
    
   
//    cout << i << " " << j << " " << dp[i][j][0] << " " << dp[i][j][1] << endl;


//   }
//  }


if(ans){
  cout<< "YES" << endl;
}else{
  cout << "NO" << endl;
}
    


  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

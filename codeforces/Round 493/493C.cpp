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


//LL dp[300007];

int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  LL n, x,y;

  cin >> n >> x >> y;

  string s;

  cin >> s;

  LL swaps = 0,dist=0;

  if(s[0] == '0'){dist+=1;}

  for (int i = 0; i < n-1; ++i)
  {
    
    if(s[i] == '0' && s[i+1]=='1'){
      swaps+=1;
    }
     
    if(s[i] == '1' && s[i+1]=='0'){
      dist+=1;
    }




  }


  //cout << swaps << " " << dist << endl;

  if(dist >0){
 

  LL minn = (dist-1)*min(x,y)+y;

  cout << minn << endl;


  
}else{
    cout << "0" << endl;
  }





  


  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

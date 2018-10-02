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
map<LL,int> mp;

void update(LL x){
  x+=(3e14);
  for(;x<=1e16;x+=(x&-x)){
    mp[x]+=1;
  }
}


int query(LL x){
  x+=(3e14);
  LL res = 0;
  for(;x>0;x-=(x&-x)){
    res+=mp[x];
  }
 return res;
}

int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n;
  LL t; 

  cin >> n >> t;

  LL a[n];

  LL sum[n+1];

  sum[0] = 0;

  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    sum[i+1] = (sum[i]+a[i]);
  }
 
 LL tot=0;
  for (int i = n; i>=0; i--)
  {
  
  tot+=query(sum[i]+t-1);

  update(sum[i]);
    
    
  }


  cout << tot << endl;




  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

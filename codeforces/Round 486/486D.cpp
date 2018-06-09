//486D.cpp
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
#define mx 100009
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

int main() {



  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n;

  cin >> n;

  unordered_map<LL,int> m;

  vector<LL> v;

  for (int i = 0; i < n; ++i)
  {
   
   LL in;
   
   cin >> in;
   
   v.pb(in);
   
  }

  sort(v.begin(),v.end());

  int cnt = 1;

  LL val = INT_MAX;

  for (int i = 0; i < n; ++i)
  {
    m[v[i]] = 1;

    for (int j = 0; j < 32; ++j)
    {

    int val =  m[v[i]-pow(2,j)];
    
    if(val > 0){

      cnt = max(cnt,val+1);

      m[v[i]] = cnt;

    } 

    }


  }

   cout << cnt << endl;

  return 0;


}

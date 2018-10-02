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

int main() {



  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  set<int> s;
  
  int n,m;

  cin >> n >> m;
  
  int a[n];

  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  for (int i = 0; i < m; ++i)
  {
    int in;

    cin >> in;

    s.insert(in);

  }

for (int i = 0; i < n; ++i)
  {
    if(s.find(a[i]) != s.end()){
      cout << a[i] << " ";
    }
  }

  cout << endl;


  

  return 0;


}

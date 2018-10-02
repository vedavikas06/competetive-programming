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

  int a,b,c,n;

  cin >> a >> b >> c >> n;

  int tot = (a+b-c);

  a-= c;

  b-=c;



  if(tot < n && a >= 0 && b >= 0 && c >= 0 && tot >= 0){
    cout << n-tot << endl;
  }else{
    cout << "-1" << endl;
  }

  return 0;


}

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

  string s;

  cin >> s;

  for (int i = 1; i < s.length()-1; i++)
  {
    

    if(s[i-1] == 46 || s[i] == 46 || s[i+1] == 46){
      continue;
    }
    set<char> se;

    se.insert(s[i-1]);
    se.insert(s[i]);
    se.insert(s[i+1]);
    

    if(se.size() == 3){
      cout << "Yes" << endl;
      return 0;
    }

    
  }


  cout << "No" << endl;

  return 0;


}

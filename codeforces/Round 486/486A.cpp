//486A.cpp
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

  int n, k;

  cin >> n >> k;

  set<int> s1;

  vector<int> v;

  for (int i = 0; i < n; ++i)
  {
   
   int in;
   
   cin >> in;
   
   if(s1.find(in) == s1.end()){
    
    s1.insert(in);

    v.pb(i+1);
   
   }



  }


  if(v.size()>=k){
    cout << "YES" << endl;


    for (int i = 0; i < k; ++i)
    {
      cout << v[i] << " ";
    }

    cout << endl;

  }else{

    cout << "NO" << endl;
  }

  return 0;


}

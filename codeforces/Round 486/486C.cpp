//486C.cpp
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

  cin >> n ;

  
  map<LL,vector<pair<int,int>> > m;


  for (int i = 0; i < n; ++i)
  {
    LL len;

    cin >> len;

    vector<LL> v(len);

    LL sum = 0;

    for (int j = 0; j < len; ++j)
    {
     
     cin >> v[j];

     sum += v[j];

    }

    //cout << sum << endl;

    set<LL> s1;

    for (int j = 0; j < len; ++j)
    {

     if(s1.find(sum-v[j]) == s1.end()){
      
       m[sum-v[j]].pb({i+1,j+1});
       
       s1.insert(sum-v[j]);
     }

     
    }

    s1.clear();


  }



  for(auto& i: m){
   
   // cout << i.first << endl;

    if(i.second.size() >= 2){

      cout << "YES" << endl;

      for (int j = 0; j < 2 ; ++j)
      {
        cout << (i.second)[j].first << " " << (i.second)[j].second << endl;
      }
      
       return 0;
    }

   
  }

  cout << "NO" << endl;

  
  return 0;


}

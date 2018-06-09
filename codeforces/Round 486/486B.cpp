//486B.cpp
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


bool comp(string a,string b){

  if(b.find(a) != string::npos){
    return true;
  }
    return false;
  
}

bool comp1(string a,string b){

  if(a.length() < b.length()){
    return true;
  }
    return false;
  
}


int main() {



  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n, k;

  cin >> n ;

  
  set<string> se;

  vector<string> v;

  map<string,int> m;

  for (int i = 0; i < n; ++i)
  {
   
   string s;

   cin >> s;
   
   if(se.find(s) == se.end()){
   
   se.insert(s);
   
   v.pb(s);

   }

   m[s]++;
   
   
   }
   

   sort(v.begin(),v.end(),comp);

   int cnt = 0;

   for (int i = 1; i < v.size(); ++i)
   {
     if(v[i].find(v[i-1]) != string::npos){
      cnt++;
     }
   }

   if(cnt == v.size()-1){
    cout << "YES" << endl;

    for (int i = 0; i < v.size(); ++i)
    {
      for (int j = 0; j < m[v[i]] ; ++j)
      {
        cout << v[i] << endl;

      }
        
    }

   }else{

    cout << "NO" << endl;

   }

  
  return 0;


}

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


LL facto[21];

set<string> ch;


LL answ(string s,int sz){


 set<char> se;


  for (int i = 0; i < s.length(); ++i)
  {
    se.insert(s[i]);
  }

  sort(s.begin(),s.end());

  if(sz == se.size() && ch.find(s) == ch.end()){

 int cnt[10];

 for (int i = 0; i < 10; ++i)
 {
   cnt[i] = 0;
 }


 for (int i = 0; i < s.length(); ++i)
 {
   cnt[s[i]-'0']++;
 }

 LL fin = facto[s.length()];

 for (int i = 0; i < 10; ++i)
 {
   fin/=facto[cnt[i]];
 }


 if(cnt[0]!=0){

 LL red = facto[s.length()-1];

 cnt[0]--;

for (int i = 0; i < 10; ++i)
 {
   red/=facto[cnt[i]];
 }


fin-=red;

 }

 // cout << se.size() << " ";

 // cout << fin << endl;

 ch.insert(s);

 
 return fin;


}

// cout << endl;

return 0;

}



int main() {

    // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  facto[0] = 1;

  for (int i = 1; i <= 21 ; ++i)
  {
    facto[i]=i*facto[i-1];
  }

  string s;

  cin >> s;

  LL ans=0;




  set<char> se;

  for (int i = 0; i < s.length(); ++i)
  {
    se.insert(s[i]);
  }

  int sz = se.size();


  // cout << (1<<s.length()) << " " << sz << endl;

  for (int i = 1; i <= (1<<s.length()) ; ++i)
  {
    string fi;

    for (int j = 0; j < s.length() ; ++j)
    {
      if(i & (1<<j)){
        fi+=s[j];
      }


    }

    // cout << fi <<  " ";

    ans+=answ(fi,sz);
  }


  cout << ans << endl;

  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

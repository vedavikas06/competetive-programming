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

bool vowel(char ch){

  if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
    return true;
  }
  return false;
}


int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

 string s;

 cin >> s;

 int br = 0;

 for (int i = 0; i < s.length(); ++i)
 {
   if(!vowel(s[i]) && s[i] != 'n'){
    if(i+1 < s.length() && vowel(s[i+1])){
      continue;
    }else{
     br = 1;
     break;
    }
   }

 }

if(br == 1){
  cout << "NO" << endl;
}else{
    cout << "YES" << endl;
}



  


  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

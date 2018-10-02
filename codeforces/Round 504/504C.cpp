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


int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

 int n,k;

 cin >> n >>k;

 string s;

 cin >> s;


 stack<int> st;

 int cnt=0;
 vi acc(n,0);

 for0(i,n){
  acc[i] = 0;
  if(s[i]=='('){
    st.push(i);
  }else{
    int tp = st.top();
    st.pop();
    acc[i] = 1;
    acc[tp] = 1;

    cnt+=2;
    
  }

  if(cnt==k) break;
 }



 for0(i,n){
  if(acc[i]==1)cout << s[i];
 }

 cout << endl;

 // cout << s1 <<  s2 << endl;

 // regex b(s1);

 // if(regex_match(s2, b) ){
 //  cout << "YES" << endl;
 // }else{
 //  cout << "NO" << endl;
 // }





  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

//482A.cpp
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


bool comp(string a, string b) {

  if (b.find(a) != string::npos) {
    return true;
  }
  return false;

}

bool comp1(string a, string b) {

  if (a.length() < b.length()) {
    return true;
  }
  return false;

}


int main() {



  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n;
  
  LL m;

  cin >> n >> m ;


  // string s;

  // while(m!=0){
  //   s+=to_string(m%2);
  //   m/=2;
  // }
  // int len = s.length();
  // for (int i = 1; i <= n-1-len ; ++i)
  // {
  //   s+='0';
  // }

  // reverse(s.begin(),s.end());

  // s= s.substr(0,n-1);

  //cout << s << endl;

  vector<int> v(n, 0);
  int beg = 0, end = n - 1;
  for (int i = 0; i < n - 1 ; ++i)
  {
    // cout << pow(2, n - i - 2) << endl;
    if (pow(2, n - i - 2) >= m) {

      v[beg] = i + 1;
      beg++;
    } else {

      v[end] = i + 1;
      end--;
      m-= pow(2, n - i - 2);
    }
  }

  for (int i = 0; i < n; ++i)
  {
    if (!v[i]) {
      cout << n << " ";
    } else {
      cout << v[i] << " ";
    }
  }


  cout << endl;

  return 0;


}

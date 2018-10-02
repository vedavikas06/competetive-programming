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
  
  int n,p;

  cin >> n >> p;

  string s;

  cin >> s;

  for (int i = 0; i < n-p; ++i)
  {
    if((s[i] == '1' || s[i] == '0') && s[i+p] == '.'){
      s[i+p]  = '1'-s[i]+48;
      for (int j = 0; j < n; ++j)
      {
        if(s[j] == '.'){
          s[j] = '0';
        }
      }

      cout << s << endl;
      return 0;
    }else if((s[i+p] == '1' || s[i+p] == '0') && s[i] == '.'){
     
      s[i]  = '1'-s[i+p]+48;
      
      
      for (int j = 0; j < n; ++j)
      {
        if(s[j] == '.'){
          s[j] = '0';
        }
       
      }

      cout << s << endl;


      return 0;



    }else if((s[i+p] == '.') && s[i] == '.'){
      
      s[i] = '0';
      s[i+p]  = '1';
      for (int j = 0; j < n; ++j)
      {
        if(s[j] == '.'){
          s[j] = '0';
        }
      }

      cout << s << endl;
      return 0;


    }else if(s[i+p] == ('1'-s[i]+48)){

      for (int j = 0; j < n; ++j)
      {
        if(s[j] == '.'){
          s[j] = '0';
        }
      }

      cout << s << endl;
      return 0;

    }


  }
  
  cout << "No" << endl;

  return 0;


}
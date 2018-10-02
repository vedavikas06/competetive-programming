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

  string s[2];

  cin >> s[0] >> s[1];

  int n = s[0].length();


  int cnt = 0;

  for (int i = 0; i < n; ++i)
  {
    
      if(i+1 < n && s[0][i] == '0' && s[0][i+1] == '0' && s[1][i] == '0'){
       s[0][i] = 'X';
       s[0][i+1] = 'X';
       s[1][i] = 'X';

       cnt++;



      }

      if(i+1 < n && s[0][i] == '0' && s[1][i+1] == '0' && s[1][i] == '0'){

       s[0][i] = 'X';
       s[1][i+1] = 'X';
       s[1][i] = 'X';

       cnt++;



      }


      if(i+1 < n && s[0][i] == '0' && s[0][i+1] == '0' && s[1][i+1] == '0'){
       s[0][i] = 'X';
       s[0][i+1] = 'X';
       s[1][i+1] = 'X';

       cnt++;



      }

      if(i+1 < n && s[0][i+1] == '0' && s[1][i] == '0' && s[1][i+1] == '0'){
       s[0][i+1] = 'X';
       s[1][i] = 'X';
       s[1][i+1] = 'X';

       cnt++;



      }





      //   if(lc >= 1 && uu >= 1){

      //     int kl = 0,ku=0;
         
      //    if (i - 1 >= 0 && s[i - 1][j] == '0' && ku < 1) {
           
      //      s[i-1][j] = 'X';

      //      ku++;

      //   }

      //   if(j-1 >= 0 && s[i][j-1]=='0' && kl < 1){
      //     s[i][j-1] = 'X';

      //      kl++;
      //   }

      //   if(i+1 < 2 && s[i+1][j]=='0' && ku < 1){
      //      s[i+1][j] = 'X';

      //      ku++;
      //   }

      //   if(j+1 < n && s[i][j+1]=='0' && kl < 1){
      //     s[i][j+1] = 'X';

      //      kl++;
      //   }

      //    cnt++;

      //  s[i][j] = 'X';


      // //cout << s[i][j] << " ";


      // // cout << i << " " << j << endl;

      // // cout << s[0] << endl;
      // // cout << s[1] << endl;


      //   }

    

      }


    

  cout << cnt << endl;

  // cout << s[0] << endl;
  // cout << s[1] << endl;

  return 0;


}


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

  int n;

  cin >> n;

  float a[n+1];

  float sum = 0; 

  for (int i = 1; i <= n; ++i)
  {
    cin >> a[i];

    sum+= a[i];
  }


  // cout << sum << endl;

  float req = ceil(4.5*n);


  // cout << req << endl;

  float extra = req-sum;

  // cout << extra << endl;
  

  if(req <= sum){
    cout << "0" << endl;
  }else{
  
  sort(a+1,a+n+1);

  int cnt = 0;
  for (int i = 1; i <= n; ++i)
  {
    extra -= (5-a[i]);

    cnt++;
    
    if(extra <= 0){

      break;
    }
 
    

  }


  cout << cnt << endl;


  }





  return 0;


}

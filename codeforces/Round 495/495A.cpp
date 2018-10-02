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

  LL n,d;

  cin >> n >> d;


  LL a[n];

  for0(i,n){
    cin >> a[i];
  }

  sort(a,a+n);
   
   int cnt =0;

  for (int i = 1; i < n ; ++i)
  {
    LL e = a[i-1]+d;

    LL f = a[i]-d;

    if(e >= a[i-1] && e <= a[i]){

     if(min(e-a[i-1],a[i]-e) == d){
      //cout << e << endl;
      cnt++;
     }
    }

    if(f >= a[i-1] && f <= a[i] && e!=f){

     if(min(f-a[i-1],a[i]-f) == d){
      //cout << f << endl;
      cnt++;
     }

    }


  }



cout << cnt+2 << endl;


  


  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

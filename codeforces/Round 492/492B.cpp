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
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef vector<int> vi;
typedef vector<pii> vii;





int main() {

    // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n;

  cin >> n;


  int a[n];

  for0(i,n){
    cin >> a[i];
  }

  int b[n];

  for0(i,n){
    b[i] = i;
  }

  int res[n];

  for (int i = 0; i < n; ++i)
  {
    
   if(a[i]<=b[i]){
    res[i] = b[i];
   }else{

   //a[i]-=b[i];
   
   if((a[i]-b[i])%n != 0){

   a[i] += (n-((a[i]-b[i])%n));

 } 

  res[i] = a[i];

   }


  }

  cout << min_element(res,res+n) - res +1 << endl;
  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

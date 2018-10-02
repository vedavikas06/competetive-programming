//500C.cpp
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

 int n;

 cin >> n;

 LL a[2*n];

 for (int i = 0; i < 2*n; ++i)
 {
   cin >> a[i];
 }


 sort(a,a+2*n);

LL minn = (a[n-1]-a[0])*(a[2*n-1]-a[n]);


for (int i = 1; i < n; ++i)
{
  minn = min(minn,(a[i+n-1]-a[i])*(a[2*n-1]-a[0]));
}

cout << minn << endl;

  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

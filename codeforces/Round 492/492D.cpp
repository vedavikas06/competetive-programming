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

  int a[2*n];

  int b[2*n];

  for (int i = 0; i < 2*n; ++i)
  {
    cin >> b[i];
    a[i] = b[i];
  }

for (int i = 0; i < 2*n; i+=2)
{
  a[i+1] = a[i];
}


int cnt = 0;

for (int i = 1; i < 2*n; i+=2)
{
 
 int j = i;

 for (j = i; j < 2*n ; ++j)
 {

  if(b[j] == b[i-1]){

    break;
   
 }

  }

  if(i!=j){
  
  while(j!=i){

    int a1 = b[j];

    b[j] = b[j-1];

    b[j-1] = a1;

    j--;

    cnt++;

  }



  }



  
}

cout << cnt << endl;

 
  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

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

  vector<pii> v;

  map<int,int> mp1,mp2;

  for (int i = 0; i < n; ++i)
  {
  	int a ,b;

  	cin >> a >> b;

  	v.pb({a,b});

  	mp1[a]++;
  	mp2[b]++;
  }

  int maxx = 0;

  for (int i = 0; i < n; ++i)
  {
   
   pii las = v[i];

   int f=0,g=0;

   if(mp1[las.fir]==1){
   	mp1.erase(las.fir);
   	f=1;
   }	

   if(mp2[las.sec]==1){
   	mp2.erase(las.sec);
   	g=1;
   }

   int a = mp1.rbegin()->fir;

   int b = mp2.begin()->fir;

   // cout << a << " " << b << endl;

   if(a<b){
   maxx = max(maxx,b-a);
   }
  if(f==1){
  	mp1[las.fir]++;


  }


  if(g==1){
  	mp2[las.sec]++;
  }

  }


  cout << maxx << endl;

  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

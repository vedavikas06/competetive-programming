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



int main() {



  ios_base::sync_with_stdio(false);

  cin.tie(NULL);


  int a[4],b[4];

  float c[4],d[4];

  int c1 = 0,c2 =0;

  int d1 =0 ,d2 =0;



  for (int i = 0; i < 8; ++i)
  {
    if(i%2==0){
      cin >> a[i/2];
      c1+=a[i/2];
    }else{
      cin >> b[(i-1)/2];
      c2+=b[(i-1)/2];
    }
  }
 for (int i = 0; i < 8; ++i)
  {
    if(i%2==0){
      cin >> c[i/2];
      d1+=c[i/2];
    }else{
      cin >> d[(i-1)/2];
      d2+=d[(i-1)/2];
    }
  }

  c1/=4;
  c2/=4;
  d1/=4;
  d2/=4;



  float side1 = sqrt(pow((c[0]-d1),2)+pow(d[0]-d2,2));
  
  vector<pii> v;
  for (int i = *min_element(a,a+4); i <= *max_element(a,a+4) ; ++i)
  {
    for (int j = *min_element(b,b+4); j <= *max_element(b,b+4) ; ++j)
    {
      v.pb({i,j});
    }
  }


int cnt =0;

for (int i = 0; i < v.size(); ++i)
{
  
  if(abs(v[i].first-d1)+abs(v[i].second-d2) <= side1 ){
    cnt++;
  }
}


if(cnt > 0){
  cout << "YES" << endl;
}else{
  cout << "NO" << endl;

}

return 0;

}

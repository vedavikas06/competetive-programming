//482A.cpp
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

  cin >> n ;

  // int a[n];
  vii a(n);

  for (int i = 0; i < n; ++i)
  {
    cin >> a[i].first;
    a[i].second = i+1;
  }

  if(n==1){
    cout << "-1" << endl;
  }else if(n==2){
    if(a[0].fir == a[1].fir){
      cout << "-1" << endl;
    }else{
      cout << "1" << endl;
      cout << "2" << endl;
    }
  }else{

    sort(a.begin(),a.end());

    int t = (n/2)+1;
    int s1=0,s2=0;

    for (int i = 0; i < n-t ; ++i)
    {
      s1+=a[i].fir;
    }


    for (int i = n-t; i < n ; ++i)
    {
      s2+=a[i].fir;
    }

    if(s1!=s2){


    cout << t << endl;

    for (int i = n-t; i < n ; ++i)
    {
      cout << a[i].sec << " ";
    }
   
   cout << endl;
  }else{
    cout << "-1" << endl;
  }



  }


  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

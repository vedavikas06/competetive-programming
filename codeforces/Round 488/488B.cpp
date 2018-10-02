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

  //set<int> s;

  int n, k;

  cin >> n >> k;

  map<pii,int> m;

  map<int,LL> op;

  vector<pii> v(n);

  for (int i = 0; i < n; ++i)
  {
    cin >> v[i].first;
  }

  for (int i = 0; i < n; ++i)
  {
    cin >> v[i].second;

    m[{v[i].first,v[i].second}] = i;

    //cout << v[i].first << " " << v[i].second << endl;
  }
  
  sort(v.begin(),v.end());



  priority_queue<int> g;

  for (int i = 0; i < n; ++i)
  {

   vector<int> sd;

   LL sum = v[i].second;

   int k1 = k;

   while(!g.empty() && k1 > 0){

        int to = g.top();

        //cout << "ok" << endl;

        sum += to;

        sd.pb(to);

        g.pop();

        k1--;

       
    }



    sd.pb(v[i].second);

    sort(sd.begin(),sd.end());

    reverse(sd.begin(),sd.end());

    //g.clear();


    int c = 0;

    int siz = sd.size();

    while(c < min(10, siz)){

      g.push(sd[c]);

      c++;

    }
     
     op[m[{v[i].first,v[i].second}]] = sum;

    //cout << sum << " ";


    
  }


  for (int i = 0; i < n; ++i)
  {
    cout << op[i] << " ";
  }


  cout << endl;

  return 0;


}

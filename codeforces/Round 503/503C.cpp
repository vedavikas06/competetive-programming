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
// int n;

// cin >> n;

// int a[n+1];

// for1(i,n){
//   cin >> a[i];

// }

// for1(j,n){

//   int st = a[j];
//   bool visited[n+1];

//   for1(k,n){
//     visited[k] = false;
//   }

//   visited[j] = true;
//   while(!visited[st]){
//     visited[st] = true;
//     st = a[st];
//   }

//   cout << st << " ";

// }

// cout << endl;
// priority_queue<pair<long,int> ,vector<pair<long,int>>, greater<long long> > q;

  int n,m;

  cin >> n >>m;

  vector<pair<int,long long> > v;
  int a;
  LL b;

  map<int,int>m1;
  
  for0(i,n){
    cin >> a >> b;

    v.push_back({a,b});
    
    // if(a!=1){
    // q.push({b,a});
    // }
    m1[a]++;

  }
   
   pii x = *max_element(m1.begin(), m1.end(),[](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; });

   vector<long long> mn,ab;


   
   if(x.first == 1 ){
    cout << "0" << endl;
    return 0;
   }
   
   for0(i,n){
    
    if(v[i].first == x.first){
      mn.pb(v[i].second);
    }else if(v[i].first!=1){
      ab.pb(v[i].second);
    }

   }
   sort(mn.begin(),mn.end());
   sort(ab.begin(),ab.end());

   int st = x.second-m1[1]+1;

  // pair<long,int> p1,p2;

   long long tot_count = 0;
  // while(st>0){


  vector<pair<long long,int> > last;

  int i=0,j=0;

  while(i < ab.size() && j < mn.size() ){

   if(i+1 < ab.size() ){
    if(ab[i]+ab[i+1] < mn[j]){
    last.pb({ab[i],0});
    i++;
    }else{
    last.pb({mn[j],1});
    j++; 
    }


   }else{

    if(mn[j]/2 > ab[i]){
    last.pb({ab[i],0});
    i++;
  }else{
    last.pb({mn[j],1});
    j++;
   }

  }

  }
 
 // cout << st << endl;
  i =0;
  while(st>0){
    if(last[i].second){
    tot_count+=last[i].first;
    st-=2;
  }else{

     tot_count+=last[i].first;
    st-=1;

  }

  i++;

  }


cout << tot_count << endl;



   
  







  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

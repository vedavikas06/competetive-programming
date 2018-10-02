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

  map<string,int> m;

  for (int i = 0; i < n; ++i)
  {
    string s;
    int k;

    cin >> k >> s;

    sort(s.begin(),s.end());

    if(m.find(s) != m.end()){
      m[s] = min(m[s],k);
    }else{
      m[s] = k;

    }
  }

  // for(auto i:m){
  //   cout << i.first << i.second << endl;
  // }

for(auto i:m){
  pair<string,int> p = i;
  for(auto j:m){
  pair<string,int> q = j;
   
   string s = p.first+q.first,s1="";
   if(s.find("A") != -1){
    s1+="A";
   }

   if(s.find("B") != -1){
    s1+="B";
   }

   if(s.find("C") != -1){
    s1+="C";
   }


    if(m.find(s1) != m.end()){
      m[s1] = min(m[s1],p.second+q.second);
    }else{
      m[s1] = p.second+q.second;

    }




  }
}




for(auto i:m){
  pair<string,int> p = i;
  for(auto j:m){
  pair<string,int> q = j;
   
   string s = p.first+q.first,s1="";
   if(s.find("A") != -1){
    s1+="A";
   }

   if(s.find("B") != -1){
    s1+="B";
   }

   if(s.find("C") != -1){
    s1+="C";
   }


    if(m.find(s1) != m.end()){
      m[s1] = min(m[s1],p.second+q.second);
    }else{
      m[s1] = p.second+q.second;

    }




  }
}


if(m.find("ABC") != m.end()){
  cout << m["ABC"] << endl;
}else{
  cout << "-1" << endl;
}
  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

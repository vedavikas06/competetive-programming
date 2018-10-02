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


  LL a;

  cin >> a;

  LL inti = 1,last= a,lol;


  while(inti <= last){
  
  LL bs = (inti+last)/2;

  LL a1 = a,cnt = 0;

  while(a1>0){
    cnt+=min(bs,a1);

    a1-=min(bs,a1);

    a1-=(a1/10);
  }

  if(cnt>=((a%2)+a/2)){
    lol = bs;
    //cout << cnt << " " << bs << " ";
    last =bs-1; 
  }else{
    inti = bs+1;
  }

  //cout << inti << " " << last  << endl;

  }


  cout << lol << endl;
  return 0;


}

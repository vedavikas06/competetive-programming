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

 LL n,k;

 cin >> n >> k;

 LL st = k/2,end =0,minn=0;

 if(st > n-1){
  cout << "0" << endl;
 }else{
   
   if(k%2 == 0){
    
    end = st+1;
    st = st-1;

    //cout << st << " " << end << endl;

   minn = min(st,n-end+1); 
   }else{

    end = st+1;

     minn = min(st,n-end+1);
     //cout << st << " " << end << endl;

   }
 cout << minn << endl;



 }


 // cout << s1 <<  s2 << endl;

 // regex b(s1);

 // if(regex_match(s2, b) ){
 //  cout << "YES" << endl;
 // }else{
 //  cout << "NO" << endl;
 // }





  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

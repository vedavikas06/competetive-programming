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

  int n,h,a,b,k;

  cin >> n >> h >> a >> b >> k;


  for (int i = 0; i < k; ++i)
  {
    
    int ta,fa,tb,fb;

    int cnt =0;

    cin >> ta >> fa >> tb >> fb;



    // if(fa <= a && fb <= a){
    //  cnt= (a-fa)+(a-fb)+abs(ta-tb);
    // }else if(fa >= b && fb >= b){
    //   cnt= (fa-b)+(fb-b)+abs(ta-tb);

    // }else if( fa >= a && fa <= b &&fb >= a && fb <= b){
    //   cnt= abs(ta-tb);
    // }else{
    //   if(fa <= a){
    //      cnt= (a-fa)+abs(fb-a)+abs(ta-tb);
    //   }else{

    //   }
    // }
    if(ta == tb){
      cout << abs(fa-fb) << endl;
    }else{


    if(fa >= b){
      
        cnt= abs(b-fa)+abs(fb-b)+abs(ta-tb);

      
    }else if(fa>= a && fa <= b){
    
    
      cnt = abs(fb-fa)+abs(ta-tb);
    


    }else{
       
        cnt= abs(a-fa)+abs(fb-a)+abs(ta-tb);

    }

    cout << cnt << endl;

  


  }

  
}





  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}

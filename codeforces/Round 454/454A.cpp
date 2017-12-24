//codeforces 454A.cpp
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
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;



int main(){



ios_base::sync_with_stdio(false);

cin.tie(NULL);


int v1,v2,v3,vm;

cin >> v1 >> v2 >> v3 >> vm;



// int cnt1 =0,cnt2=0;

// if(vm <= v1 && 2*vm >= v1){

// cnt1++;

// }else if(vm <= v1 ){

//   cnt2++;

// }

// if(vm <= v2 && 2*vm>= v2){

// cnt1++;

// }else if(vm <= v2){

//   cnt2++;

// }

// if(cnt2 ==2 && vm <= v3 && 2*vm>= v3 && vm > 0){
//   cout << v1 << endl;
//   cout << v2 << endl;
//   cout << v3 << endl;

// }else{

//   cout << "-1" << endl;

// }

for (int i = v1; i <=  2*v1; ++i)
{
  for (int j = v2; j <= 2*v2; ++j)
  {
    for (int k = v3; k <= 2*v3; ++k)
    {
      
     int cnt1 =0,cnt2=0;

     if(vm <= i && 2*vm >= i){

    cnt1++;

}else if(vm <= i ){

  cnt2++;

}

if(vm <= j && 2*vm >= j){

    cnt1++;

}else if(vm <= j ){

  cnt2++;

}




    if(cnt2==2 && vm <= k && 2*vm>= k && i> j && j > k ){

    
    cout << i << "\n" << j << "\n" << k << endl;

    return 0;

    }

  }

  }


}

cout << "-1" << endl;


return 0;


}



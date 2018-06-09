//cf481D.cpp
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

int n;


cin >> n;


int a[n],ar[n];

for (int i = 0; i < n; ++i)
{
  cin >> a[i];
}

set<int> s;
for (int i = 1; i < n; ++i)
{
  s.insert(a[i]-a[i-1]);
}

if(s.size() == 1 || n == 1){
  cout << "0" << endl;
}else{

vector<int> m;
for (int i = a[0]-1; i <= a[0]+1; ++i)
{
  for (int j = a[1]-1; j <= a[1]+1 ; ++j)
  {
   ar[1] = j;
  for (int k = 2; k < n ; ++k)
  {
     ar[k] = a[k];
  }

  int val = (j-i);

  int cnt=0,k = 0;

  for (k = 2; k < n; k++)
  {
  
    if((ar[k]-ar[k-1]) == val){
    
     continue;

    }else if((ar[k]-ar[k-1]-1) == val){
   
    cnt++;
    ar[k]--;
    
    continue;

    }else if((ar[k]-ar[k-1]+1) == val){

    cnt++;
    ar[k]++;
    

   continue;

   }else{

    break;

    }



  }

  if(k==n){

    if(i!=a[0]){
    cnt++;
    }

    if(j!=a[1]){
      cnt++;
    }

    m.pb(cnt);

    //cout << cnt << endl;
  
  }



}


}

if(m.empty()){

  cout << "-1" << endl;

}else{

  cout << *min_element(m.begin(),m.end()) << endl;

}

}







return 0;


}

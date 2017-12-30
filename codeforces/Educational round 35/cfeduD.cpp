//cf eduD.cpp
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

int arr[n+1];

for (int i = 1; i <= n ; ++i)
{
  cin >> arr[i];
}


int cnt= 0;

for (int i = 1; i <= n ; ++i)
{
  for (int j = i+1; j <= n ; ++j)
  {
    if(arr[i]>arr[j]){
      cnt++;
    }

  }


}


int q;

cin >> q;

for (int i = 0; i < q; ++i)
{
  int l,r;

  cin >> l >> r;


 if(((r-l+1)/2)%2==0 ){
  cnt+=0;
 }else{
  cnt+=1;
 }


if(cnt%2==0){
  cout << "even" << endl;
}else{

cout << "odd" << endl;

}


}





return 0;


}

//Testing2.cpp
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


int n,a,b;

cin >> n >> a >> b;

if(4*a+2*b<=n){
  cout << "1" << endl;
}else if(2*a+b<=n){
  cout << "2" << endl;
}else if( max(2*b+a,3*a)<=n || max(a+b, 2*a)<=n || max(4*a,b)<=n || max(2*a,2*b)<=n){
cout << "3" << endl;
}else if(max(b,2*a)<=n || a+b<=n){
  cout << "4" << endl;
}else if(max(2*b,a)<=n){
  cout << "5" << endl;
}else{
  cout << "6" << endl;
}





return 0;


}

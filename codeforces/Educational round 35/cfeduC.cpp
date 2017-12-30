//cf eduA.cpp
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

long long mod = 1000000007;



int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int k1,k2,k3;

cin >> k1 >> k2 >> k3;

vector<int> v;
v.pb(k1);
v.pb(k2);
v.pb(k3);

sort(v.begin(),v.end());

if(v[0]==1 || v[1] == 2 || (v[0] == 3 &&  v[1] == 3 && v[2] ==3 ) || (v[0] == 2 && v[1] == 4 && v[2] == 4)){
	cout << "YES" << endl;
} else{
	cout << "NO" << endl;
}





return 0;


}

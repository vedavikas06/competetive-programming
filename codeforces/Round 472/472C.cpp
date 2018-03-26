//cff 472c.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;




int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);


int n,u;

cin >> n >> u;

vector<int> v(n);


for (int i = 0; i < n; ++i)
{
	
cin >> v[i];

}
vector<double> max1;

for (int i = 0; i <n-2 ; ++i)
{

    vector<int>::iterator lower;

	lower =  lower_bound(v.begin()+i, v.end(),v[i]+u);

	

	if(lower==v.end() || *lower > v[i]+u){

		lower = lower-1;
	
	}

  // cout << *lower << endl;

  if(lower - (v.begin()+i) > 1){

  double m = (v[i+1] - v[i])/((double)(*lower - v[i]));

  cout << fixed << setprecision(15);

  m = 1.000000000000000-(m);

  max1.pb(m);

 // cout << m << endl;

  }


}


if(max1.empty()){
	cout << "-1" << endl;
}else{
	cout << *max_element(max1.begin(),max1.end()) << endl;
}

return 0;


}




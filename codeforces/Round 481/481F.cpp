//cf481F.cpp
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

int n,k;

cin >> n >> k;

vector<int> v(n),v1(n);

for (int i = 0; i < n; ++i)
{
	cin >> v[i];
}

v1 = v;

sort(v1.begin(),v1.end());

map<int,int> m,m1;

int cnt = 0,same = 0;

for (int i = 0; i < n; ++i)
{
	if(i==0){
		m[v1[i]] = 0;

		cnt++;

	}else{

		if(v1[i] != v1[i-1]){

			m[v1[i]] = cnt+same;

			cnt++;

		}else{

			same++;

		}
	}
}

// for (int i = 0; i < n; ++i)
// {
// 	cout << m[v[i]] << " ";
// }

// cout << endl;

for (int i = 0; i < k; ++i)
{
	int a,b;

	cin >> a >> b;

	if(v[a-1] > v[b-1]){
		m1[a-1]++;
	}else if(v[a-1] < v[b-1]){
		m1[b-1]++;
	}

}

for (int i = 0; i < n; ++i)
{
	cout << m[v[i]]-m1[i] << " ";
}

cout << endl;

return 0;


}

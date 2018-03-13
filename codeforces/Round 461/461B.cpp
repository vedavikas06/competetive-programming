//cff 456A.cpp
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

int n;

cin >> n;

int cnt = 0;

for (int i = 1; i <= n; ++i)
{
	for (int j = i; j <= n ; ++j)
	{
		int k = i^j;

		if( k <= n  && j <= k && i+j > k && j+k > i && i+k > j){

			cnt++;

		}
	}
}

cout << cnt << endl;

}




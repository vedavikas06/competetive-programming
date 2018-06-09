//cf481A.cpp
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

vector<int> v;

int n;

cin >> n;

for (int i = 0; i < n; ++i)
{
	int in;

    cin >> in;

	v.pb(in);
}



reverse(v.begin(),v.end());

vector<int> v1;

for (int i = 0; i < v.size(); ++i)
{
	if(find(v1.begin(),v1.end(),v[i]) == v1.end()){
		v1.pb(v[i]);
	}
}


cout << v1.size() << endl;

reverse(v1.begin(),v1.end());

for (int i = 0; i < v1.size(); ++i)
{
	cout << v1[i] << " ";
}

cout << endl;


return 0;


}

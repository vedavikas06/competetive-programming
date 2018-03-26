//cff 472B.cpp
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

int n,m;

cin >> n >> m;


string s[n];

for (int i = 0; i < n; ++i)
{
	cin >> s[i];
}


set<string> se;

for (int i = 0; i < n; ++i)
{
	
se.insert(s[i]);

}

//cout << se.size() << endl;
vector<string> v(se.begin(),se.end());


for (int i = 0; i < m; ++i)
{
	int cnt = 0;

	for (int j = 0; j < v.size(); ++j)
	{
		if(v[j][i] == '#'){
         
         cnt++;

		}
	}

	if(cnt <= 1){
		continue;
	}else{
		cout << "No" << endl;
		return 0;
	}
}


cout << "Yes" << endl;

return 0;


}




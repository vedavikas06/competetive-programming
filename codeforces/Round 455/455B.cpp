//codeforces 455B.cpp
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


cout << (floor(n/2)+1)* ceil((float)n/2) << endl;


return 0;


}

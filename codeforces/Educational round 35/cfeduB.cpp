//cf eduB.cpp
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


bool comp(pair<int,int> a,pair<int,int> b){

return (a.second-a.first)<(b.second-b.first);

}


int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n;

cin >> n;

int a,b;

cin >> a >> b;

int max1 =  -1;
for (int i = 1; i <= n-1 ; ++i)
{
	if((a/i)>0 && (b/(n-i))>0){

    max1 = max(max1,min(a/i,b/(n-i)));

	}else{
		continue;
	}
}


cout << max1 << endl;


return 0;


}

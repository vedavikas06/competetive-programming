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


bool comp(pair<int,int> a,pairn<int,int> b){

return (a.second-a.first)<(b.second-b.first);

}


int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n;

cin >> n;

int a[n+1];


unordered_map<int,vector<pair<int,int> > > m;

int prev = -1;

for (int i = 1; i <= n; ++i)
{
	
	cin >> a[i];
    
}


int min = *min_element(a+1,a+n+1);


for (int i = 1; i <= n; ++i)
{
	
	if(a[i] == min){

		if(prev!=-1){

    m[min].pb({prev,i});



		}

		prev = i;

	}
    
}





sort(m[min].begin(),m[min].end(),comp);




cout << m[min][0].second-m[min][0].first << endl;








return 0;


}

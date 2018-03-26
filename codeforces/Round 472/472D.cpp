//cff 472D.cpp
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

int a[n];

for (int i = 0; i < n; ++i)
{
	cin >> a[i];
}


int t = 0,fin[n];

for (int i = n-1; i >=0 ; i--)
{
	
 fin[i] = t = max((t>1?t-1:0),a[i]+1);


}

LL sum = 0;

for (int i = 0; i < n; ++i)
{
	
fin[i] = t = max(t,fin[i]);

sum+=fin[i];

sum-=(a[i]+1);

}

cout << sum << endl;



return 0;


}




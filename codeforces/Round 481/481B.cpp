//cf481B.cpp
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

int n,m1;

cin >> n >> m1;

LL a[n+1];

a[0] = 0;

for (int i = 1; i <= n ; ++i)
{
	cin >> a[i];

}

for (int i = 2; i <= n ; ++i)
{
	a[i] += a[i-1];

}



vector<LL> b(m1);
vector<LL> c(m1);

for (int i = 0; i < m1; ++i)
{
	cin >> b[i];
}

c = b;

sort(c.begin(),c.end());



map<LL,pair<LL,LL> > m;

int i=0,j=1;

while(i<m1){

	

	while(j <= n && i < m1){

  if(c[i] > a[j]){

  	j++;

  	//cout << "test " << i << " " << j << endl;

  }else{

  	m[c[i]] = {j,c[i]-a[j-1]};

  	i++;
  }

}





}


for (int i = 0; i < m1; ++i)
{
	cout << m[b[i]].first << " " << m[b[i]].second << endl;
}

return 0;


}

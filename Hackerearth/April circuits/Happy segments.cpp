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
 
 
 
int n,q,block,m;
 
vector<int> a(500005,0),cnt(500005,0), b(500005,0);
 
vector< pair< pair<int,int>,int > > qu;
 
 
bool comp(pair< pair<int,int>,int > a,pair< pair<int,int>,int > b){
 
	int a1 = a.first.first/block;
	
	int a2 = b.first.first/block;
 
	if(a1 == a2){
	
		return a.first.second < b.first.second;
	
	}else{
	
		return a1 < a2;
	
	}
 
 
}
 
 
int main(){
 
	ios_base::sync_with_stdio(false);
 
	cin.tie(NULL);
	scanf("%d %d",&n,&m);
 
	block = sqrt(n);
	for (int i = 1; i <= n ; i++)
	{
	scanf("%d",&a[i]);
	}
	for (int i = 1; i <= m ; i++)
	{
	scanf("%d",&b[i]);
	}
 
 	scanf("%d",&q);
 
	for (int i = 0; i < q; ++i)
	{
	
		int a,b;
		
		scanf("%d %d",&a,&b);
		qu.pb({{a,b},i});
	
	
	}
	
 
	sort(qu.begin(),qu.end(),comp);
 	// MO's Algo
	int left_mo = 1,right_mo = 0;
	int tot = m;
	
	int old,neww,pr;
	vector<int> op(q); 
	
	for (int i = 0; i < q; ++i)
	{
		int left = qu[i].first.first;
 
		int right = qu[i].first.second;
 
		//cout << left << " " << right << endl;
 
		while(right_mo < right){
 
			right_mo++;
 
	
			old = cnt[a[right_mo]]++;
			
			neww = old+1;
			pr = b[a[right_mo]];
			
			if((old==0||old==pr) && (neww!=0&&neww!=pr)){
				tot--;
			}
 
			if((old!=0&&old!=pr) && (neww==0||neww==pr)){
				tot++;
			}
 
 
 
		}
 
		while(right_mo > right){
 
			
			old = cnt[a[right_mo]]--;
			neww = old-1;
			pr = b[a[right_mo]];
 
			right_mo--;
 
			if((old==0||old==pr) && (neww!=0&&neww!=pr)){
				tot--;
			}
 
			if((old!=0&&old!=pr) && (neww==0||neww==pr)){
				tot++;
			}
 
		}
 
		while(left_mo < left){
 
			
			old = cnt[a[left_mo]]--;
			neww = old-1;
			pr = b[a[left_mo]];
			
			if((old==0||old==pr) && (neww!=0&&neww!=pr)){
				tot--;
			}
 
			if((old!=0&&old!=pr) && (neww==0||neww==pr)){
				tot++;
			}
 
			left_mo++;
		}
 
		while(left_mo > left){
 
			
			left_mo--;
			
			old = cnt[a[left_mo]]++;
			neww = old+1;
			pr = b[a[left_mo]];
 
			if((old==0||old==pr) && (neww!=0&&neww!=pr)){
				tot--;
			}
 
			if((old!=0&&old!=pr) && (neww==0||neww==pr)){
				tot++;
			}
 
		}
		
		op[qu[i].second] = tot==m?1:0;
	
	}
	
	for (int i = 0; i < q; ++i)
	{
	
		printf("%d\n",op[i]);
	
	}
	
	
 
	return 0;
 
 
}
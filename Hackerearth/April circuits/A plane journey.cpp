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

	int n,m;
	scanf("%d %d",&n,&m);
 
	int a[n],b[m];
	for (int i = 0; i < n ; i++)
	{
	scanf("%d",&a[i]);
	}
	for (int i = 0; i < m ; i++)
	{
	scanf("%d",&b[i]);
	}
	sort(a,a+n);
	sort(b,b+m);

	if(*max_element(a,a+n)>*max_element(b,b+m)){
		cout << -1 << endl;
	}else if(*max_element(a,a+n) <= *min_element(b,b+m)){
		cout << ceil((float)n/m) << endl;
	}else{

		map<int,int> pr;
		
		for(int i=0;i<n;i++){
			pr[a[i]]++;
		}
		int tp = 0;
		while(!pr.empty()){
			tp++;
			
			for(int j=m-1;j>=0 && !pr.empty();j--){
				
				auto it = pr.lower_bound(b[j]);
				
				if((it==pr.end()) || (it->first>b[j] && it!=pr.begin())){
					it--;
				}
				if(it->first<=b[j]){
					pr[it->first]--;
					if(pr[it->first]==0){
						pr.erase(it->first);
					}
				}else{
					break;
				}
			}

			
			if(!pr.empty()){
				tp++;
			}
		}

		cout << tp << endl;
	}

	return 0;
 
 
}